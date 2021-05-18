# "MergeSort" ou "Ordenação por Mistura"
- Ideia básica: Dividir e consquistar
- Divide , recursivamente , o conjunto de dados até que cada subconjunto possua 1 elemento.
- Combina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado
- Esse processo se repete até que exista apenas 1 conjunto.

## "Performance"
- Melhor Caso: O(N log N)
- Pior Caso: O(N log N)
- Estável: não altera a ordem de dados iguais.
- Desvantagens: recursivo e usa um vetor auxiliar durante a ordenação.

## Problema: Rearranjar um vetor em ordem crescente 

Algoritmo Rearranja A[p..r] em ordem   crescente , supondo p <= r
```
Merge-Sort(A,p,r)
    se p<r
        então q<-[(p+r)/2]
            Merge-Sort(A,p,q)
            Merge-Sort(A,q + 1,r)
            Intercala(A,p,q,r)
```