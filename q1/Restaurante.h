#ifndef RESTAURANTE_H
#define RESTAURANTE_H 
#include "Pedido.h"
#include "Mesas.h"


class Restaurante{
    public:
    double CalculaTotal();
    void setMesaC(Mesas d, int pos);
    void Adiciona()

    private:
    Mesas m[50];
};