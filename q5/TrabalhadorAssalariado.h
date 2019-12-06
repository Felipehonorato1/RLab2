#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

using namespace std;

class TrabalhadorAssalariado: public Trabalhador{

    public: 
    TrabalhadorAssalariado(string n, double s);
    double CalculaPagamentoSemanal();
    private:
    



};

#endif
