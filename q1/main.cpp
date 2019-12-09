#include <iostream>
#include "Mesas.h"
#include "Pedido.h"

using namespace std;

int main(){
    Mesas m[5];
    int num;
    Pedido novo = Pedido("chá",10,1);
    m[1].AdicionarPedido(novo);
    Pedido dois = Pedido("Cerveja",1,1);
    m[1].AdicionarPedido(dois);
    Pedido tres = Pedido("Carne",12,2);
    m[1].AdicionarPedido(tres);
    cout << "Mesa 1: \n" << m[1].RMesa() << endl;
    cout << "Valor total: " << m[1].Conta() << endl;
    m[1].ZeraPedidos();
    cout<<m[1].RMesa() << endl;



    return 0;
}