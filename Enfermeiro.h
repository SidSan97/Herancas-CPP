#include <string>
#include "Funcionario.h"
#pragma once

using namespace std;

class Enfermeiro: public Funcionario{ //Declaração de herança no C++

  private:

    string coren; //Conselho Regional de Enfermagem

  public:

    Enfermeiro(string nome, int idade, char sexo, string cpf, string turno, string coren)
    {
      this->setNome(nome);
      this->setIdade(idade);
      this->setSexo(sexo);
      this->setCpf(cpf);
      this->setTurno(turno);
      this->setCoren(coren);
    }

    void setCoren(string corenEnf)
    {
      this->coren = corenEnf;
    }

    string getCoren()
    {
      return this->coren;
    }
};