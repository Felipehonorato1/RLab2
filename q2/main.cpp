#include "Endereco.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
#define N 2 

using namespace std;

int main(){

    Endereco cc = Endereco("Edgar Albuquerque Lins","Altiplano","Joao Pessoa",320,"58046-485");
    Endereco pp = Endereco("Professora Maria Sales","Tambau","Joao Pessoa",512,"58046-444");
    Pessoa p = Pessoa("Pedro");
    p.SetPessoa("Pedro",pp,"991741180");
    
    cout << p.GetNome() << endl;
    cout <<p.GetTelefone() << endl;
    cout << p.GetEndereco() << endl;
    
    Pessoa c = Pessoa("Joao",cc,"986805171");
    cout << c.GetNome() << endl;
    cout << c.GetTelefone() << endl;
    cout << c.GetEndereco() << endl;
    


    return 0;
}