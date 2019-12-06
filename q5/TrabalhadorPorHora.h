#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include <iostream>
#include "Trabalhador.h"

using namespace std;

class TrabalhadorPorHora :public Trabalhador{
    public:
    TrabalhadorPorHora();
    TrabalhadorPorHora(string n,double h);
    double CalculaPagamentoSemanal(double hSemanais);

    private:
    double ValorDaHora;

};



#endif