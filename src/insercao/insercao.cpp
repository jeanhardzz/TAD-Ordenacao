#include "insercao.h"

Insercao::Insercao(){

}

void Insercao::Ordena(TipoItem v[20], int n){
    int i,j;
    TipoItem aux;
    for (i = 1; i < n; i++) {
        aux = v[i];
        j = i - 1;
        while (( j >= 0 ) && (aux.GetChave() < v[j].GetChave())) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}