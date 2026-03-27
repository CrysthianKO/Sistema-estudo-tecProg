#include "departamento.hpp"

#include <cstring>

Departamento::Departamento() {}
Departamento::Departamento(int n) { id = n; }

Departamento::~Departamento() {}

void Departamento::setNome(const char* n) { strcpy(nome, n); }
char* Departamento::getNome() { return nome; }

void Departamento::setUniversidade(Universidade* pu) { pUniversidade = pu; }
Universidade* Departamento::getUniversidade() { return pUniversidade; }
void Departamento::listeDisciplinas() {}
