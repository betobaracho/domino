#include "peca.h"
#include<iostream>

Peca::Peca(int n1,int n2) { this->numero1=n1;this->numero2=n2 ;}

int Peca::getNumero1(){
    return numero1;
}

int Peca::getNumero2(){
    return numero2;
}