#include <iostream>
#include "Funcionario.h"

using namespace std;

class Medico: public Funcionario { //Declaração de herança no C++
  private:
    
    string crm;
    string especialidade;

  public:

    Medico(string nome, int idade, char sexo, string cpf, string turno, string crm, string especialidade)
    {
      this->setNome(nome);
      this->setIdade(idade);
      this->setSexo(sexo);
      this->setCpf(cpf);
      this->setTurno(turno);
      this->setCrm(crm);
      this->setEspecialidade(especialidade);
    }

    void setCrm(string crmMedico)
    {
      this->crm = crmMedico;
    }

    string getCrm()
    {
      return this->crm;
    }

    void setEspecialidade(string especialidadeMed)
    {
      this->especialidade = especialidadeMed;
    }

    string getEspecialidade()
    {
      return this->especialidade;
    }

    void definirPlantao(int plantao)
    {
      cout <<"Plantao de hoje eh: "<< plantao <<" horas" << endl;
    }
};