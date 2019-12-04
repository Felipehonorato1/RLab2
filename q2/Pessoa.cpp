#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>

#include <string>

using namespace std;


    Pessoa::Pessoa(string n){
        nome = n;
    }

    void Pessoa::SetPessoa(string n, Endereco s, string tel){
        nome = n;
        d = s;
        telefone = tel;  
    }

    string Pessoa::GetNome(){
        return nome;
    }
    string Pessoa::GetTelefone(){
        return telefone;
    }
    string Pessoa::GetEndereco(){
        return d.To_String();
    }


    Pessoa::Pessoa(string n,Endereco e,string tel){
        nome = n;
        d = e;
        telefone = tel;
    }