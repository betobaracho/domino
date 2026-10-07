#ifndef JOGADOR_H
#define JOGADOR_H
#include <vector>
#include "peca.h"
class Jogador{
private:
    std::vector<Peca> pecas = {};
public:
    Jogador(std::vector<Peca>);
    std::vector<Peca> getPecas();
    
};

#endif