#include "mesa.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

Mesa::Mesa(std::vector<Jogador> j, Domino d): jogadores(j),domino(d)
{}

void  Mesa::embaralhar(){
    //int t = this->domino->
    int randomNumber;
    Peca p(-1,-1); 
    Peca p2(-1,-1);
    Peca pAux(-1,1);
    for(int i = 0; i < 28; i++){
        cout<< this->domino.getPeca(i).getNumero1() <<" "<< this->domino.getPeca(i).getNumero2() << endl;
        randomNumber = rand() % 28;
        p = this->domino.getPeca(i);
        p2 = this->domino.getPeca(randomNumber);
        this->domino.setPeca(i,p2);
        this->domino.setPeca(randomNumber,p);
        cout<< this->domino.getPeca(i).getNumero1() <<" "<< this->domino.getPeca(i).getNumero2() << endl<<endl;
    }
    return;
}

void Mesa::distribuir(){

}