#pragma once
#include "departamento.hpp"

class Universidade {
 private:
  char nome[30];
  Departamento* dpto;

 public:
  Universidade();
  ~Universidade();
  void setNome(const char* n);
  char* getNome();
  void setDepartamento(Departamento* pdep);
};
