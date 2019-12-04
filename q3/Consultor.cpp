#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"   
    
    Consultor::Consultor(){}
    
    double Consultor::getSalario(){
        return salario * 1.1;
    }
    double Consultor::getSalario(float p){
        return salario*p;
    }
