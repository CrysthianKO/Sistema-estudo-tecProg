#include "universidade.hpp"
#include <cstring>


Universidade::Universidade(){}

Universidade::~Universidade(){
}

Universidade::Universidade(const char *n){
  strcpy(nome, n);
}
void Universidade::setNome(char* n){
  strcpy(nome, n);
}
char* Universidade::getNome(){
  return nome;
}

//set departamento
