#include "principal.hpp"

#include <time.h>

#include "stdafx.hpp"

Principal::Principal() {
  setupTime();
  inicializa();
}

void Principal::inicializa() {
  inicializaUniversidades();
  inicializaDepartamentos();
  inicializaProfessores();
  inicializaDisciplinas();
}
void Principal::inicializaUniversidades() {
  UTFPR.setNome("UTFPR");
  UNIR.setNome("UNIR");
}

void Principal::inicializaDepartamentos() {
  DAELN.setNome("DAELN");
  DAELN.setUniversidade(&UTFPR);
  LetrasUNIR.setNome("Letras");
  LetrasUNIR.setUniversidade(&UNIR);
}
void Principal::inicializaProfessores() {
  Simao.Inicializa(20, 5, 1900, "simao jean ferreira cruz");
  Crysthian.Inicializa(30, 4, 2003, "Crysthian Silva Santana");

  Crysthian.setUniversidade(&UNIR);
  Simao.setUniversidade(&UTFPR);

  Crysthian.setDepartamento(&LetrasUNIR);
  Simao.setDepartamento(&DAELN);
}
void Principal::inicializaDisciplinas() {
  comp1.setNome("computacao 1");
  comp2.setNome("computacao 2");
  matematica.setNome("matematica");

  DAELN.incluaDisciplina(&comp1);
  DAELN.incluaDisciplina(&comp2);
  DAELN.incluaDisciplina(&matematica);

  comp1.setDepartamento(&DAELN);
  comp2.setDepartamento(&DAELN);
  matematica.setDepartamento(&DAELN);
}

Principal::~Principal() {}

void Principal::Executar() {
  cout << "Iniciando app faculdade.\n";

  Crysthian.OndeTrabalho();

  DAELN.listeDisciplinas();
}

void Principal::setupTime() {
  struct tm* local;
  time_t segundos;
  time(&segundos);
  local = localtime(&segundos);
  diaAtual = local->tm_mday;
  mesAtual = local->tm_mon + 1;
  anoAtual = local->tm_year + 1900;
}
