# TAD-Pesquisa
Implementação de todos os métodos de pesquisa que aprendi em C++.

**Estabilidade**
* Método é estável se a ordem relativa dos registros com a mesma chave não se altera após a ordenação.

**Adaptabilidade**
* Sequência de operações executadas conforme a entrada.
* Não adaptável: operações executadas independe da entrada.

# Métodos Simples

## Bolha

**Vantagens**
* Algoritmo simples
* Algoritmo estável

**Desvantagens**
* Não adaptável em termos de comparações
* Muitas trocas de itens

**Complexidade**
* C(n)
    * O(n²)
    
* M(n)
    * Melhor Caso: O(1)
    * Pior Caso: O(n²)

## Seleção

**Vantagens**
* Custo linear no tamanho da entrada para o número de movimentos de registros – a ser utilizado quando há registros muito grandes.
**Desvantagens**
* Não adaptável (não importa se o arquivo está parcialmente ordenado).
* Algoritmo não é estável.

**Complexidade**
* C(n)
    * O(n²)
* M(n)
    * O(n)

## Inserção

**Vantagens**

* É o método a ser utilizado quando o arquivo está “quase” ordenado.
* É um bom método quando se deseja adicionar uns poucos itens a um arquivo ordenado, pois o custo é linear.
* O algoritmo de ordenação por inserção é estável.

**Desvantagens**
* Alto custo de movimentação de elementos no vetor.

**Complexidade**
* C(n)
    * Melhor Caso: O(n)
    * Pior Caso: O(n²)
* M(n)
    * Melhor Caso: O(n)
    * Pior Caso: O(n²)

**Opção de melhoria (Usando uma sentinela)**
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



