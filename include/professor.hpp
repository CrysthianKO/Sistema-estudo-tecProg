#pragma once

#include "pessoa.hpp"

class Professor : public Pessoa {
 private:
  Universidade* pUniFiliado;
  Departamento* pDepFiliado;

 public:
  ~Professor();
  void setUniversidade(Universidade* pu);
  void setDepartamento(Departamento* pdpto);
  void OndeTrabalho();
  void QualDepartamentoTrabalho();
};
