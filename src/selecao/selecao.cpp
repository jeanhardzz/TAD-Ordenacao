#include "selecao.h"


Selecao::Selecao(){

}

void Selecao::Ordena(TipoItem v[20],int n){
    int i, j, min;
    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1 ; j < n; j++){
            if (v[j].GetChave() < v[min].GetChave()){
                min = j;
            }                
        }
        //Troca(v[i], v[Min]);
        TipoItem aux = v[i];
        v[i]=v[min];
        v[min]=aux;
    }
}