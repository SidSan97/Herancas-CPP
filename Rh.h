#include <iostream>
#include "Funcionario.h"

using namespace std;

class Rh: public Funcionario { //Declaração de herança no C++
  private:
    
    string atribuicao;

  public:

    Rh(string nome, int idade, char sexo, string cpf, string turno, string atribuicao)
    {
      this->setNome(nome);
      this->setIdade(idade);
      this->setSexo(sexo);
      this->setCpf(cpf);
      this->setTurno(turno);
      this->setAtribuicao(atribuicao);
    }
    
    void setAtribuicao(string atribuicao)
    {
      this->atribuicao = atribuicao;
    }

    string getAtribuicao()
    {
      return this->atribuicao;
    }

    void gerarRelatorio()
    {
      cout << "Relatorio Gerado." << endl;
    }

  void contratacao()
    {
      cout << "Método para contratar novos funcionários";
    }
};