#ifndef TRIANGULO_H
#define TRIANGULO_H 
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica {

    public: 
    Triangulo(double l,double h);
    double CalcularArea();

    private:
    double lado;
    double altura;


};

#endif 