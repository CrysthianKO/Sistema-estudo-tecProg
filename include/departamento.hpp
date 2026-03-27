#pragma once
#include "disciplina.hpp"
class Universidade;

class Departamento {
 private:
  int id;
  char nome[100];
  Universidade* pUniversidade;
  Disciplina* pDisciplPrim;
  Disciplina* pDisciplAtual;

 public:
  Departamento(int i);
  Departamento();
  ~Departamento();

  void setNome(const char* n);
  char* getNome();
  void setUniversidade(Universidade* pu);
  Universidade* getUniversidade();

  void incluaDisciplina(Disciplina* pd);
  void listeDisciplinas();
};
