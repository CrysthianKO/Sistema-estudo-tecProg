#include "principal.hpp"

#include <time.h>

#include "stdafx.hpp"

Principal::Principal() : Simao(1) {
  setupTime();

  Simao.Inicializa(20, 5, 1800, "simao jean ferreira cruz");
  Crysthian.Inicializa(30, 4, 2003, "Crysthian Silva Santana");

  UTFPR.setNome("UTFPR");

  DAELN.setNome("DAELN");
  DAELN.setUniversidade(&UTFPR);

  Crysthian.setUniversidade(&UTFPR);
  Crysthian.setDepartamento(&DAELN);
}

Principal::~Principal() {}

void Principal::Executar() {
  cout << "Iniciando app faculdade.\n";

  Crysthian.OndeTrabalho();

  UTFPR.setDepartamento(&DAELN);
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
