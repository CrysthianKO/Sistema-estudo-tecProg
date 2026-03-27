#pragma once
class Universidade;

class Departamento {
 private:
  int id;
  char nome[100];
  Universidade* pUniversidade;

 public:
  Departamento(int i);
  Departamento();
  ~Departamento();
  void setNome(const char* n);
  char* getNome();
  void setUniversidade(Universidade* pu);
  Universidade* getUniversidade();

  void listeDisciplinas();
};
