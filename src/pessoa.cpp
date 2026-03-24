#include "pessoa.hpp"
#include <string.h>
#include "stdafx.hpp"

Pessoa::Pessoa(){
   
}
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa,const char* nome){
  diaP = diaNa;
  mesP = mesNa;
  anoP = anoNa;
  strcpy(nomeP, nome);
  idadeP = 0;
}

Pessoa::~Pessoa(){

}


void Pessoa::CalculaIdade(int diaAt, int mesAt, int anoAt){
  idadeP = anoAt - anoP;
  if (mesP < mesAt)
  {
    idadeP = idadeP - 1;
  } else 
  {
    if (mesP == mesAt)
    {
      if (diaP < diaAt)
      { 
        idadeP = idadeP - 1;
      }
    }
  }
  printf("A idade da Pessoa %s seria %d \n", nomeP, idadeP);
}

int Pessoa::informaIdade(){
  return idadeP;
}

void Pessoa::setNome(const char* nome){
  strcpy(nomeP, nome);
}

char* Pessoa::getNome(){
  return nomeP;
}

void Pessoa::setId(int id){
  idP = id;
}
int Pessoa::getId(){
  return idP;
}
