# TAD-Ordenação
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

**Opção de melhoria**
```
void Bolha (Item *v, int n) {
    int i, j, trocou;
    for(i = 0; i < n-1; i++){
    trocou = 0;
    for(j = 1; j < n-i; j++){
        if (v[j].GetChave() < v[j-1].GetChave()){
            Troca(v[j-1], v[j]);
            trocou = 1;
        }
    }
    if (!trocou) break;
    }
}
```

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

# Métodos Eficientes

## Quicksort

**Vantagens**
* É extremamente eficiente para ordenar arquivos de dados.
* Necessita de apenas uma pequena pilha como memória auxiliar.
* Requer cerca de n log n comparações em média para ordenar n itens.

**Desvantagens**
* Tem um pior caso O(n²) comparações.
* Sua implementação é muito delicada e difícil:
* Um pequeno engano pode levar a efeitos inesperados para algumas entradas de dados.
* O método não é estável.

**Complexidade**
* C(n)
    * Melhor Caso: O(n.logn)
    * Médio Caso: O(n.logn)
    * Pior Caso: O(n²)

**Melhorias**
* Escolha do pivô: mediana de três.
* Utilizar um algoritmo simples (seleção,inserção) para partições de tamanho pequeno.
* Quicksort não recursivo.

## HeapSort

**Vantagens**
* O comportamento do Heapsort é sempre O(n log n), qualquer que seja a entrada.

**Desvantagens**
* O anel interno do algoritmo é bastante complexo se comparado com o do Quicksort.
* O Heapsort não é estável.
* O método não é estável.

**Recomendado**
* Para aplicações que não podem tolerar eventualmente um caso desfavorável.
* Não é recomendado para arquivos com poucos registros, por causa do tempo necessário para construir o heap.

**Complexidade**
* C(n)
    * Sempre O(nlogn)







