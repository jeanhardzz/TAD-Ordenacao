#include <iostream>

#include "src/bolha/bolha.h"
#include "src/selecao/selecao.h"
#include "src/insercao/insercao.h"
#include "src/Quicksort/quicksort.h"
#include "src/Heapsort/heapsort.h"
#include "src/tipoitem.h"

int main(){

    TipoItem v[20];
    int i;      

    for(i=0;i<20;i++){
        v[i]=rand()%100;
    }
    
    for(i=0;i<20;i++){
        std::cout<<v[i].GetChave()<<", ";
    }

    Bolha bolha;
    //bolha.Ordena(v,20);

    Selecao selecao;
    //selecao.Ordena(v,20);

    Insercao insercao;
    //insercao.Ordena(v,20);

    QuickSort quicksort;
    //quicksort.OrdenaRecursivo(v,20);

    Heapsort heapsort;
    int n=20;
    heapsort.Ordena(v,n);




    std::cout<<"\nOrdenado: \n";
    for(i=0;i<20;i++){
        std::cout<<v[i].GetChave()<<", ";
    }   



    return 0;
}