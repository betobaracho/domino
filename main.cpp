
#include <iostream>
#include "domino.h"
#include "mesa.h"
#include <vector>
#include "jogador.h"
using std::cout;
using std::endl;

void mostrarPeca(int domino[28][2],int numPeca){
    cout<<domino[numPeca][0]<<":"<<domino[numPeca][1]<<endl;
}
int main(){

    Domino Domino;
    Jogador j1("Beto");
    std::vector<Jogador> jogadores = {j1};
    Mesa Mesa(jogadores,Domino);
    cout<<"Nome do jogador: "<< j1.getNome() <<endl;
    Mesa.embaralhar();
    return 0;
}

