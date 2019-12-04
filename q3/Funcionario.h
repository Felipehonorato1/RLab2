#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>


using namespace std;

class Funcionario{
    public:
    
    Funcionario();
    int getMatricula();
    double getSalario();
    string getNome();

    void setNome(string n);
    void setMatricula(int m);
    void setSalario(double s);


    protected:
    int matricula;
    double salario;
    string nome;
};


#endif 