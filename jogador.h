#ifndef JOGADOR_H
#define JOGADOR_H
#include <vector>
#include "peca.h"
#include <string>
class Jogador{
private:
    std::vector<Peca> pecas = {};
    std::string nome;
public:
    Jogador(std::string);
    std::vector<Peca> getPecas();
    void setPecas(std::vector<Peca>);
    std::string getNome();
};

#endif