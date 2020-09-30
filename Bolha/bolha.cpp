#include "bolha.h"
#include <iostream>

Bolha::Bolha(){
    
}

void Bolha::Ordena(TipoItem v[20], int n){
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = n-1; j > i; j--) {
            if (v[j-1].GetChave() > v[j].GetChave()){
                /* comparações */
                TipoItem aux = v[j-1];
                v[j-1]=v[j];
                v[j]=aux;
                                
            }
        }
    }
}
