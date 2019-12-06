#include "Trabalhador.h"

    Trabalhador::Trabalhador(string n,double s){
        nome = n;
        salario = s;
    }

    Trabalhador::Trabalhador(){
        nome = "";
        salario = 0.0;
    }

    void Trabalhador::setSalario(double s){
        salario = s;
    }
    void Trabalhador::setNome(string n){
        nome = n;
    }

    double Trabalhador::getSalario(){
        return salario;
    }
    string Trabalhador::getNome(){
        return nome;
    }
