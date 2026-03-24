#pragma once
#include "universidade.hpp"

class Pessoa
{
private:
  int idP;
  int diaP; int mesP; int anoP; int idadeP;
  char nomeP[30];

  Universidade* pUnivFiliado;

public:
  Pessoa(int diaNa, int mesNa, int anoNa,const char* nome = "");
  Pessoa ( );
  ~Pessoa ( );
  void Inicializa(int diaNa, int mesNa, int anoNa, const char* nome);
  void CalculaIdade(int diaAt, int mesAt, int aniAt);
  int informaIdade();
  void setNome(const char* nome);
  char* getNome();
  void setId(int id);
  int getId();
};
