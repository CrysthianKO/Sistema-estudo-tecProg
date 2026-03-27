#pragma once
#include "aluno.hpp"
#include "professor.hpp"

class Principal {
 private:
  Professor Crysthian;
  Aluno Simao;

  Universidade UTFPR;
  Departamento DAELN;

  int diaAtual;
  int mesAtual;
  int anoAtual;

 public:
  Principal();
  ~Principal();
  void Executar();
  void setupTime();
};
