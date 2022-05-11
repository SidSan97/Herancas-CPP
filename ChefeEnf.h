#include <string>
#include <vector>
#include "Enfermeiro.h"

using namespace std;

class ChefeEnf: public Enfermeiro{ //Declaração de herança no C++

  private:

    vector<string> equipe; //Equipe liderada pelo Enfermeiro Chefe

  public:

    //Chama o construtor da classe mãe
    ChefeEnf(string nome, int idade, char sexo, string cpf, string turno, string coren):Enfermeiro(nome,idade,sexo, cpf, turno, coren){}

    void adicionarEnf(string enf)
    {
      equipe.push_back(enf);
    }

    vector<string> getEquipe()
    {
      return equipe;
    }
};