#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"

using namespace std;

int main(){
    Funcionario pedro = Funcionario();
    pedro.setMatricula(456);
    pedro.setNome("Pedro");
    pedro.setSalario(1500);
    cout << pedro.getMatricula() << endl;
    cout << pedro.getNome() << endl;
    cout << pedro.getSalario() << endl;

    Consultor joao = Consultor();
    cout << "CONSULTOR : " << endl;
    joao.setSalario(1000);
    joao.setNome("Joao");
    cout << "Nome: " << joao.getNome() << endl;
    joao.setMatricula(123);
    cout << "Salario * 10% : " << joao.getSalario() << endl;
    float percentual = 1.5;
    cout << "Salario * 50% : " << joao.getSalario(percentual) << endl;
    

    return 0;
}