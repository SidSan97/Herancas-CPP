#include <string>
#include "Enfermeiro.h"

using namespace std;

class Tecnico: public Enfermeiro{ //Declaração de herança no C++

  private:

    string funcao; //Pode ser Técnico em Radiologia, de Laboratório etc

  public:

    //Chama o construtor da classe mãe e inicializa o atributo único desta classe
    Tecnico(string nome, int idade, char sexo, string cpf, string turno, string coren, string funcao):Enfermeiro(nome, idade, sexo, cpf, turno, coren)
    {
      this->setFuncao(funcao);
    }

    void setFuncao(string funcaoEnf)
    {
      this->funcao = funcaoEnf;  
    }

    string getFuncao()
    {
      return this->funcao;
    }
};