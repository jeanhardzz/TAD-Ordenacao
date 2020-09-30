# TAD-Pesquisa
Implementação de todos os métodos de pesquisa que aprendi em C++.

# Métodos Simples
## Bolha
## Seleção
## Inserção
* É estável
* Complexidade    
    * C(n)
        * Melhor Caso: O(n)
        * Pior Caso: O(n²)
    * M(n)
        * Melhor Caso: O(n)
        * Pior Caso: O(n²)
* Opção de melhoria
```
void Insercao(Item *v, Indice n){
    Indice i, j;
    Item aux;
    for (i = 2; i <= n; i++){
        aux = v[i];
        j = i -1;
        V[0] = aux; /* sentinela */
        while (aux.GetChave() < v[j].GetChave()){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = aux;
    }
}
```
