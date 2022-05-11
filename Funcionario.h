#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#pragma once

using namespace std;

class Funcionario{

  private:
    
    string nome;
    int idade;
    char sexo;
    string cpf;
    string turno;

  public:

    void setNome(string nomeFunc)
    {
      this->nome = nomeFunc;
    }

    string getNome()
    {
      return this->nome;
    }

    void setIdade(int idadeFunc)
    {
      this->idade = idadeFunc;
    }

    int getIdade()
    {
      return this->idade;
    }

    void setCpf(string cpfFunc)
    {
      this->cpf = cpfFunc;
    }

    string getCpf()
    {
      return this->cpf;
    }

    void setSexo(char sexoFunc){
      this->sexo = sexoFunc;
    }

    char getSexo()
    {
      return this->sexo;
    }

    void setTurno(string turnoFunc)
    {
      this->turno = turnoFunc;
    }

    string getTurno()
    {
      return this->turno;
    }

    void baterPonto()
    {
      chrono::system_clock::time_point tempo = chrono::system_clock::now();
      time_t horario = chrono::system_clock::to_time_t(tempo);
      cout << this->getNome() << " iniciou seu turno em: " << ctime(&horario) << endl;
    }
};