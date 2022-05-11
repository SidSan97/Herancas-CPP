#include <string>
#include "Funcionario.h"
#pragma once

using namespace std;

class Terceirizado: public Funcionario{ //Declaração de herança no C++

  private:

    string empresa;
    string setor;

  public:

    Terceirizado(string nome, int idade, char sexo, string cpf, string turno, string empresa, string setor)
    {
      this->setNome(nome);
      this->setIdade(idade);
      this->setSexo(sexo);
      this->setCpf(cpf);
      this->setTurno(turno);
      this->setEmpresa(empresa);
      this->setSetor(setor);
    }

    void setEmpresa(string empresaTer)
    {
      this->empresa = empresaTer;
    }

    string getEmpresa()
    {
      return this->empresa;
    }

    void setSetor(string setorFun)
    {
      this->setor = setorFun;
    }

    string getSetor()
    {
      return this->setor;
    }

    void definirEscala()
    {
      cout << "Definindo Escala...";
    }

};