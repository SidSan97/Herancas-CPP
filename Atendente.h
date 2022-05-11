#include <iostream>
#include "Funcionario.h"

using namespace std;

class Atendente: public Funcionario {

  private:
    
    int cargaHoraria = 0;

  public:

    Atendente(string nome, int idade, char sexo, string cpf, string turno)
    {
      this->setNome(nome);
      this->setIdade(idade);
      this->setSexo(sexo);
      this->setCpf(cpf);
      this->setTurno(turno);
    }
    
    void setCarga(int carga)
    {
      this->cargaHoraria = carga;
    }

    int getCarga()
    {
      return this->cargaHoraria;
    }

    void marcarConsulta(string nomePaciente, string nomeMedico, string data, string hora)
    {
      cout <<"CONSULTA MARCADA COM SUCESSO!"<< endl<<endl;
      cout <<"Nome do(a) paciente: "<< nomePaciente << endl;
      cout <<"Nome do(a) médico(a): "<< nomeMedico << endl;
      cout <<"Data: "<< data <<" as "<< hora <<endl;
    }
};