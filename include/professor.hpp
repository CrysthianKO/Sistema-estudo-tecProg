#pragma once

#include "pessoa.hpp"
#include "universidade.hpp"

class Professor : public Pessoa
{
  private:
    //Universidade * pUniFiliado;

  public:
  
    Professor( int diaNa, int mesNa, int anoNa, char* nome= "" );
    Professor ( );
    ~Professor ( );
    //void setUnivFiliado (Universidade* pu);
  //  void setDepartamento(Departamento* pdpto);
    void OndeTrabalho ( );
    void QualDepartamentoTrabalho ( );
  
};
