#include "departamento.hpp"

#include <cstring>

#include "disciplina.hpp"
#include "stdafx.hpp"

Departamento::Departamento() {
  pDisciplPrim = NULL;
  pDisciplAtual = NULL;
}
Departamento::Departamento(int n) { id = n; }

Departamento::~Departamento() {
  pDisciplPrim = NULL;
  pDisciplAtual = NULL;
}

void Departamento::setNome(const char* n) { strcpy(nome, n); }
char* Departamento::getNome() { return nome; }

void Departamento::setUniversidade(Universidade* pu) { pUniversidade = pu; }
Universidade* Departamento::getUniversidade() { return pUniversidade; }

void Departamento::incluaDisciplina(Disciplina* pd) {
  if (pDisciplPrim == NULL) {
    pDisciplPrim = pd;
    pDisciplAtual = pd;
  } else {
    pDisciplAtual->pProx = pd;
    pDisciplAtual = pd;
  }
}
void Departamento::listeDisciplinas() {
  Disciplina* pAux;
  pAux = pDisciplPrim;

  while (pAux != NULL) {
    cout << "A disciplina " << pAux->getNome() << "pertence ao departamento "
         << nome << endl;
    pAux = pAux->pProx;
  }
}
