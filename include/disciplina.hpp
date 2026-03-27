#pragma once

class Departamento;

class Disciplina {
 private:
  int id;
  char nome[150];
  char area_conhecimento[150];
  Departamento* pDeptpAssociado;
  Disciplina* prox;

 public:
  Disciplina(const char* ac = "");
  ~Disciplina();

  Disciplina* pProx;

  void setId(int i);
  int getId();

  void setNome(const char* n);
  char* getNome();

  void setDepartamento(Departamento* d);
  Departamento* getDepartamento();
};
