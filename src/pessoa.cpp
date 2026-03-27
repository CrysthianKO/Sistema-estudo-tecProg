#include "pessoa.hpp"

#include <string.h>

#include "stdafx.hpp"

Pessoa::Pessoa() {
  cout << "Pessoa criada sem parametros" << endl;
  Inicializa(0, 0, 0);
}

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome) {
  cout << "Pessoa criada com parametros" << endl;
  Inicializa(diaNa, mesNa, anoNa, nome);
}
Pessoa::~Pessoa() {}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
  diaP = diaNa;
  mesP = mesNa;
  anoP = anoNa;
  strcpy(nomeP, nome);
  idadeP = 0;
}

void Pessoa::CalculaIdade(int diaAt, int mesAt, int anoAt) {
  idadeP = anoAt - anoP;
  if (mesP < mesAt) {
    idadeP = idadeP - 1;
  } else {
    if (mesP == mesAt) {
      if (diaP < diaAt) {
        idadeP = idadeP - 1;
      }
    }
  }
  printf("A idade da Pessoa %s seria %d \n", nomeP, idadeP);
}

int Pessoa::informaIdade() { return idadeP; }

void Pessoa::setNome(const char* nome) { strcpy(nomeP, nome); }
char* Pessoa::getNome() { return nomeP; }

void Pessoa::setId(int n) { id = n; }
int Pessoa::getId() { return id; }
