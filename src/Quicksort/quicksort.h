#ifndef QUICKSORT
#define QUICKSORT

#include "../tipoitem.h"

class QuickSort {
    private:
    public:
        QuickSort();
        void Ordena(TipoItem v[20],int n);
        void Recursivo(int esq, int dir, TipoItem v[20]);
        void Particao(int esq, int dir, int *i, int *j, TipoItem v[20]);
};

#endif