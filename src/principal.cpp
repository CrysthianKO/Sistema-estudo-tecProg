#include "principal.hpp"
#include "stdafx.hpp"
#include <time.h>

Principal::Principal ():
Crysthian(30,4,2003,"Crysthian Silva Santana")
{  

  struct tm *local;
  time_t segundos;
  time(&segundos);
  local = localtime(&segundos);

  diaAtual = local->tm_mday;
  mesAtual = local->tm_mon + 1;
  anoAtual = local->tm_year + 1900;
}

Principal::~Principal(){

}

void Principal::Executar(){
 cout << "Testing\n";
  Crysthian.CalculaIdade(diaAtual, mesAtual, anoAtual);
}
