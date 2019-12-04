#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

#include <string>

using namespace std;


class Endereco{
    public:
        Endereco();
        Endereco(string r,string b,string ct, int n, string cp);
        string To_String();

    private: 
        string rua;
        string bairro;
        string cidade;
        int numero;
        string cep;
};

#endif