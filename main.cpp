

#include <iostream>
#include "Domino.h"
using std::cout;
using std::endl;

void mostrarPeca(int domino[28][2],int numPeca){
    cout<<domino[numPeca][0]<<":"<<domino[numPeca][1]<<endl;
}
int main(){

    Domino domino;
  /*  const int pecas = 28, lados = 2; 
    int domino[pecas][lados] = {{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},
                        {1,1},{1,2},{1,3},{1,4},{1,5},{1,6},
                        {2,2},{2,3},{2,4},{2,5},{2,6},
                        {3,3},{3,4},{3,5},{3,6},
                        {4,4},{4,5},{4,6},
                        {5,5},{5,6},
                        {6,6}};

    for(int i=0;i<pecas;i++){        
            cout<<domino[i][0]<<":"<<domino[i][1]<<endl;        
    }*/
    //mostrarPeca(domino,2);
    //cout<<"Hello World!";
    return 0;
}

