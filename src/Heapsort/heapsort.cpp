#include <iostream>
#include "heapsort.h"

Heapsort::Heapsort(){

}
void Heapsort::Constroi(TipoItem v[20],int n){
    int Esq;
    n--;
    Esq = n / 2 + 1;
    while (Esq > 0) {
        Esq--;
        Refaz(Esq, n, v);
    }
}
void Heapsort::Refaz(int esq, int dir, TipoItem v[20]){
    int i, j;
    TipoItem x;
    i = esq;
    j = i * 2;
    x = v[i];
    while (j <= dir){
        if (j < dir){
            if (v[j].GetChave() < v[j+1].GetChave()){
                j++;
            } 
        }
        if (x.GetChave() >= v[j].GetChave()){
            break;
        }
        v[i] = v[j];
        i = j;
        j = i *2;
    }
    v[i] = x;
}

TipoItem Heapsort::RetiraMax(TipoItem *v, int *n) {
    TipoItem Maximo;
    (*n)--;
    if (*n < 1){
        std::cout<<"Erro: heap vazio\n"<<std::endl;
    }    
    else {
        Maximo = v[1];
        v[1] = v[*n];
        (*n)--;
        Refaz(1, *n, v);
    }
    return Maximo;
}