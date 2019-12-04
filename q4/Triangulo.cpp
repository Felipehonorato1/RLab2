#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo(double l,double h){
    if (l>0 && h>0){    
     altura = h;
     lado = l;
    }
}

double Triangulo::CalcularArea(){
    return (lado*altura)/2;
}