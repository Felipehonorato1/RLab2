#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(string n, double s){
    nome = n;
    salario =  s;
}

double TrabalhadorAssalariado::CalculaPagamentoSemanal(){
    return salario/4;
}