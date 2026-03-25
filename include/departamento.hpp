#pragma once
#include "universidade.hpp"

class Departamento
{
  private:
    int id;
    Universidade* pUniv;

  public:
    Departamento();
    ~Departamento();
    void setUniversidade ( Universidade* pu );
    Universidade* getUniversidade ( );
    void incluaDisciplina ( Disciplina* pd );
    void listeDisciplinas ( );

};
