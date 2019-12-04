#ifndef QUADRADO_H
#define QUADRADO_H 
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica {

    public: 
    Quadrado(double l);
    double CalcularArea();
    double getLado();

    private:
    double lado;


};

#endif 