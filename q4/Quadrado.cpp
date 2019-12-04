#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include <iostream>

Quadrado::Quadrado(double l){
    if (l>0) lado = l;
}

double Quadrado::CalcularArea(){
    return lado*lado;
}

double Quadrado::getLado(){
    return lado;
}