#pragma once
#include "pessoa.hpp"

class Principal
{
private:
  Pessoa Crysthian;
  int diaAtual;
  int mesAtual;
  int anoAtual;
  
public:
  Principal();
  ~Principal();
  void Executar();
};
