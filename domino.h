#ifndef DOMINO_H
#define DOMINO_H

#include "peca.h"

class Domino{
    private:
        const int numPecas = 28;
        const int faces = 2;
        
        Peca pecas[28] = {Peca(0,0),Peca(0,1),Peca(0,2),Peca(0,3),Peca(0,4),Peca(0,5),Peca(0,6),
                        Peca(1,1),Peca(1,2),Peca(1,3),Peca(1,4),Peca(1,5),Peca(1,6),
                        Peca(2,2),Peca(2,3),Peca(2,4),Peca(2,5),Peca(2,6),
                        Peca(3,3),Peca(3,4),Peca(3,5),Peca(3,6),
                        Peca(4,4),Peca(4,5),Peca(4,6),
                        Peca(5,5),Peca(5,6),
                        Peca(6,6)};
    public:
        Domino();
        Peca getPeca(int);    
        void setPeca(int,Peca);    
        
};
#endif