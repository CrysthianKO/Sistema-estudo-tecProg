#pragma once
#include "pessoa.hpp"

class Aluno : public Pessoa {
 private:
  int RA;

 public:
  Aluno(int i);
  void setRA(int ra);
  int getRA();
};
