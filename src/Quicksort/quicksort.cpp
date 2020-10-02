#include "quicksort.h"

QuickSort::QuickSort(){

}

void QuickSort::OrdenaRecursivo(TipoItem v[20],int n){
    Recursivo(0,n-1,v);
}

void QuickSort::Recursivo(int esq,int dir,TipoItem v[20]){
    int i, j;
    Particao(esq,dir,&i,&j,v);
    if(esq<j){
        Recursivo(esq,j,v);
    }
    if(i<dir){
        Recursivo(i,dir,v);
    }
}

void QuickSort::Particao(int esq,int dir, int *i,int *j, TipoItem v[20]){
    TipoItem x, w;
    *i = esq; *j = dir;
    x = v[(*i + *j)/2]; /* obtem o pivo x */
    do{
        while (x.GetChave() > v[*i].GetChave()) (*i)++;
        while (x.GetChave() < v[*j].GetChave()) (*j)--;
        if (*i <= *j){
            w = v[*i];
            v[*i] = v[*j];
            v[*j] = w;
            (*i)++;
            (*j)--;
        }
    }
    while (*i <= *j);
}