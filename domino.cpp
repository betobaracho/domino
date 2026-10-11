#include<iostream>
#include "domino.h"

Domino::Domino() {}

Peca Domino::getPeca(int i){
    return this->pecas[i];
};

void Domino::setPeca(int i,Peca p){
    this->pecas[i] = p;
}