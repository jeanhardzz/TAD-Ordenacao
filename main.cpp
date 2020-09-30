#include <iostream>

#include "Bolha/bolha.h"
#include "tipoitem.h"

int main(){
    TipoItem v[20];
    int i; 

    for(i=0;i<10;i++){
        v[i]=i;
    }

    for(i=10;i<20;i++){
        v[i]=20-i;
    }
    
    for(i=0;i<20;i++){
        std::cout<<v[i].GetChave()<<", ";
    }

    Bolha bolha;
    bolha.Ordena(v,20);

    std::cout<<"\nOrdenado: \n";
    for(i=0;i<20;i++){
        std::cout<<v[i].GetChave()<<", ";
    }

    return 0;
}