#include "universidade.hpp"

#include <cstring>

Universidade::Universidade() {}

Universidade::~Universidade() {}

void Universidade::setNome(const char* n) { strcpy(nome, n); }
char* Universidade::getNome() { return nome; }

void Universidade::setDepartamento(Departamento* pdep) { dpto = pdep; }
