#include "Endereco.h"
using namespace std;
#include <string>

Endereco::Endereco(string r,string b,string ct, int n, string cp){
    rua = r;
    bairro = b;
    cidade = ct;
    numero = n;
    cep = cp;
}

string Endereco::To_String(){

    return cep + " " + cidade +" "+ bairro + " " + rua + " " + to_string(numero);

}

Endereco::Endereco(){
    rua = "";
    bairro = "";
    cidade = "";
    numero = 0;
    cep = "";

}