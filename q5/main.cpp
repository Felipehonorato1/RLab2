#include <iostream>
#include <string>
#include "TrabalhadorPorHora.h"
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"



using namespace std;

int main(){
    TrabalhadorPorHora Carlos = TrabalhadorPorHora("carlos",10);
    cout << "Salario semanal "<< Carlos.getNome() << ":"  << Carlos.CalculaPagamentoSemanal(40) << endl;
    cout << "Salario mensal " << Carlos.getNome() << ":"  << Carlos.CalculaPagamentoSemanal(40)*4 << endl;
    
    TrabalhadorAssalariado joao = TrabalhadorAssalariado("joao",1800);
    cout << "Salario mensal " << joao.getNome() << ":" <<joao.getSalario()<< endl;
    cout << "Salario semanal " << joao.getNome() << ":" << joao.CalculaPagamentoSemanal()<< endl;



    return 0;
}