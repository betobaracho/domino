#include "jogador.h"
#include<iostream>

Jogador::Jogador(std::vector<Peca> p) {this->pecas = p; }

std::vector<Peca> Jogador::getPecas(){
    return this->pecas;
}