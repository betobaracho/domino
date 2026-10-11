#include "jogador.h"
#include<iostream>

Jogador::Jogador(std::string n) {this->nome = n; }

std::vector<Peca> Jogador::getPecas(){
    return this->pecas;
}

void Jogador::setPecas(std::vector<Peca> p){
    this->pecas = p;
}

std::string Jogador::getNome(){
    return this->nome;
}
