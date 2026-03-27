#include "professor.hpp"

#include "stdafx.hpp"

Professor::~Professor() {}
void Professor::setUniversidade(Universidade* pu) { pUniFiliado = pu; }
void Professor::setDepartamento(Departamento* pdpto) { pDepFiliado = pdpto; }

void Professor::OndeTrabalho() {
  cout << nomeP << " trabalha na universidade " << pUniFiliado->getNome()
       << " no departamento " << pDepFiliado->getNome() << endl;
}
void Professor::QualDepartamentoTrabalho() {}
