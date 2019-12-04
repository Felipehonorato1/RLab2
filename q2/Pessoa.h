#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include "Endereco.h"

#include <string>

using namespace std;

class Pessoa{
    public:
        Pessoa(string n);

        Pessoa(string n,Endereco e,string tel);
        
        void SetPessoa(string n, Endereco s, string tel);
        string GetNome();
        string GetTelefone();
        string GetEndereco();

    private:
        string nome;
        string telefone;
        Endereco d;
};


#endif 