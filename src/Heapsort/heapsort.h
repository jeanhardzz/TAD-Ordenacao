#ifndef HEAPSORT
#define HEAPSORT

#include "../tipoitem.h"

class Heapsort {
    private:    
    public:
        Heapsort();
        void Ordena(TipoItem v[20],int n);
        void Constroi(TipoItem v[20],int n);
        void Refaz(int esq, int n, TipoItem v[20]);
        TipoItem RetiraMax(TipoItem *v, int *n);                
};

#endif