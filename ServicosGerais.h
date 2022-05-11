#include <string>
#include "Terceirizado.h"

using namespace std;

class ServicosGerais: public Terceirizado{ //Declaração de herança no C++

  private:

    string servico; //Pode ser da limpeza, da manuntencao de equipamentos, da cozinha etc

  public:

    //Chama o construtor da classe mãe e inicializa o atributo único desta classe
    ServicosGerais(string nome, int idade, char sexo, string cpf, string turno, string empresa, string setor, string servico):Terceirizado(nome, idade, sexo, cpf, turno, empresa, setor)
    {
      this->setServico(servico);
    }

    void setServico(string serv)
    {
      this->servico = serv;  
    }

    string getServico()
    {
      return this->servico;  
    }
};