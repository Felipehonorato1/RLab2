#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <iostream>

using namespace std;

class Trabalhador{
    public:
    Trabalhador();
    Trabalhador(string n,double s);
    void setSalario(double s);
    void setNome(string n);

    double getSalario();
    string getNome();

    protected: 
    string nome;
    double salario;


};

#endif