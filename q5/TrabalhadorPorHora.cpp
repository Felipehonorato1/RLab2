#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include <iostream>

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(){
    salario = 0;
    ValorDaHora = 0;
    nome = "";
    
}
TrabalhadorPorHora::TrabalhadorPorHora(string n,double h){
    ValorDaHora = h;
    salario = 0;
    nome = n;
}

double TrabalhadorPorHora::CalculaPagamentoSemanal(double hSemanais){
    double aux;
    if(hSemanais <= 40) {
        salario = hSemanais*ValorDaHora;
        return salario;
    }
    if(hSemanais > 40) {
        aux = (hSemanais - 40) * 1.5;
        salario = 40*ValorDaHora + aux*ValorDaHora;
        return salario; 
    }

}
    