#ifndef MESA_H
#define MESA_H
#include "domino.h"
#include "jogador.h"
#include <vector>
class Mesa{
    private:
        std::vector<Jogador> jogadores;
        Domino domino;
    public:
        Mesa(std::vector<Jogador>,Domino);
        void embaralhar();
        void distribuir();
};

#endif