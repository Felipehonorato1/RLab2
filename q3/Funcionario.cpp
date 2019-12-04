#include "Funcionario.h"
#include <iostream>

using namespace std;


    Funcionario::Funcionario(){
        nome = "";
        matricula = 0;
        salario = 0;
    }

    int Funcionario::getMatricula(){
        return matricula;
    }
    double Funcionario::getSalario(){
        return salario;
    }
    string Funcionario::getNome(){
        return nome;
    }


    void Funcionario::setNome(string n){
        if(n.size()> 3) 
            nome = n;
        else {
        cout << "Valor invalido" << endl;
        nome = "";
        matricula = 0;
        salario = 0;
        }
    }

    void Funcionario::setMatricula(int m){
        if(m>0) matricula = m;

          else {
        cout << "Valor invalido" << endl;
        nome = "";
        matricula = 0;
        salario = 0;
        }
    }
    void Funcionario::setSalario(double s){
        if(s>0) salario = s;
            else {
        cout << "Valor invalido" << endl;
        nome = "";
        matricula = 0;
        salario = 0;
        }
    }