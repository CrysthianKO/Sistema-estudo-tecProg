#include "disciplina.hpp"

#include <cstring>

Disciplina::Disciplina(const char* ac) {
  pDeptpAssociado = NULL;
  pProx = NULL;

  strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina() {
  pDeptpAssociado = NULL;
  pProx = NULL;
}

void Disciplina::setId(int i) { id = i; }
int Disciplina::getId() { return id; }

void Disciplina::setNome(const char* n) { strcpy(nome, n); }
char* Disciplina::getNome() { return nome; }

void Disciplina::setDepartamento(Departamento* d) { pDeptpAssociado = d; }
Departamento* Disciplina::getDepartamento() { return pDeptpAssociado; }
