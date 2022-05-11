#include <string>
#include "Terceirizado.h"

using namespace std;

class Seguranca: public Terceirizado{ //Declaração de herança no C++

  private:

    string identificacao;//Número do documento que o capacita a ser segurança

  public:

    //Chama o construtor da classe mãe e inicializa o atributo único desta classe
    Seguranca(string nome, int idade, char sexo, string cpf, string turno, string empresa, string setor, string identificacao):Terceirizado(nome, idade, sexo, cpf, turno, empresa, setor)
    {
      this->setIdentificacao(identificacao);
    }

    void setIdentificacao(string id)
    {
      this->identificacao = id;  
    }

    string getIdentificacao()
    {
      return this->identificacao;
    }
};