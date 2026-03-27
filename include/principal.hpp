#pragma once
#include "professor.hpp"

class Principal {
 private:
  Professor Crysthian;
  Professor Simao;

  Universidade UTFPR;
  Universidade UNIR;

  Departamento DAELN;
  Departamento LetrasUNIR;

  Disciplina comp1;
  Disciplina comp2;
  Disciplina matematica;

  int diaAtual;
  int mesAtual;
  int anoAtual;

 public:
  Principal();
  ~Principal();

  void inicializa();
  void inicializaUniversidades();
  void inicializaDepartamentos();
  void inicializaProfessores();
  void inicializaDisciplinas();

  void Executar();
  void setupTime();
};
