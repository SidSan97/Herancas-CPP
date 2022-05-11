#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Enfermeiro.h"
#include "Atendente.h"
#include "Medico.h"
#include "Seguranca.h"
#include "Rh.h"
#include "ChefeEnf.h"
#include "Tecnico.h"
#include "Terceirizado.h"
#include "ServicosGerais.h"


using namespace std;

int main() {

  ChefeEnf  *enfChefe = new ChefeEnf("Jose da Silva", 30, 'M', "123456789-8", "Diurno", "45242/5");
  Tecnico   *tecEnf   = new Tecnico("Joao Silva", 22, 'M', "412598459-1", "Noturno", "86241/0", "Radiologia");
  Medico    *med      = new Medico("Carlos Souza", 45, 'M', "545268485-7", "Diurno", "520141/4", "Cardiologia");
  Atendente *at       = new Atendente("Maria Santana", 24, 'F', "145257905-7", "Matutino");
  Rh        *rh       = new Rh("Silvia Martins", 32, 'F', "842017789-5", "Diurno", "Departamento Pessoal");
  Seguranca *seg      = new Seguranca("Augusto Barros", 38, 'M', "758954987-3", "Noturno", "Seguranca Bahia LTDA", "Enfermaria", "2517/1");
  ServicosGerais *serv = new ServicosGerais("Leila Oliveira", 27, 'F', "7621895126-0", "Diurno", "Bahia Limpeza", "Ambulatorio", "Assistente de Limpeza");
  
  tecEnf->baterPonto();

  cout << endl << endl;

  //Enfermeiros
  cout << "Nome do(a) Funcionario(a): " << tecEnf->getNome() << endl
       << "Idade: " << tecEnf->getIdade() << endl
       << "Sexo: " << tecEnf->getSexo() << endl
       << "CPF: " << tecEnf->getCpf() << endl
       << "Turno: " << tecEnf->getTurno() << endl
       << "COREN: " << tecEnf->getCoren() << endl
       << "Função: " << tecEnf->getFuncao() << endl;

  cout << "------------------" << endl << endl;

  med->baterPonto();

  cout << endl << endl;

  //Medicos
  cout << "Nome do(a) Funcionario(a): " << med->getNome() << endl
       << "Idade: " << med->getIdade() << endl
       << "Sexo: " << med->getSexo() << endl
       << "CPF: " << med->getCpf() << endl
       << "Turno: " << med->getTurno() << endl
       << "CRM: " << med->getCrm() << endl
       << "Especialidade: " << med->getEspecialidade() << endl;

  cout << "------------------" << endl << endl;

  //RH
  cout << "Nome do(a) Funcionario(a): " << rh->getNome() << endl
       << "Idade: " << rh->getIdade() << endl
       << "Sexo: " << rh->getSexo() << endl
       << "CPF: " << rh->getCpf() << endl
       << "Turno: " << rh->getTurno() << endl;
  cout << "Atribuicao: "<< rh->getAtribuicao() << endl;
  
  cout << "------------------" << endl << endl;
  
  //Agendamento
  cout <<"***** Agendamento de exame *****"<<endl<<endl;
  cout << "Nome do(a) Funcionario(a): " << at->getNome() << endl
       << "Idade: " << at->getIdade() << endl
       << "Sexo: " << at->getSexo() << endl
       << "Turno: " << at->getTurno() << endl;

  at->marcarConsulta("Sidnei Santiago", "Carlos Souza", "12/05/2022", "07:00");
  
    
}