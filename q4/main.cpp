#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include <iostream>

using namespace std;

int main(){
    Quadrado cp = Quadrado(5);
    double lado = cp.getLado();
    cout << "AREA QUADRADO DE LADO "<< lado << "= " << cp.CalcularArea() << endl;
    Triangulo pk = Triangulo(4,2);
    cout << "AREA TRIANGULO: "<< pk.CalcularArea() << endl;
    

    return 0;
}