# QuickSort ou ordenação por troca de partições 
- idéia básica: Dividir e Consquistar
- um elemento é escolhido como pivo
- "particionar": os dados são rearranjados ( valores menores do que o pivo são colocados antes dele e os maiores , depois)
- recursivamente ordena as 2 partições
## "Performance" 
- Melhor Caso: O(N log N)
- Pior Caso (rado): O(N²)
- Estável: não altera a ordem de dados iguais
- Desvantagens: como escolher o pivo? (rudini dir karol rand)

```
// O algoritmo QUICKSORT rearranja A[p..r] em ordem crescente
QUICKSORT(A,p,r)
    se p < r
        então q<-PARTICIONE(A,p,r)
            QUICKSORT(A,p,q-1)
            QUICKSORT(A,q+1,r)

PARTICIONE rearranja o vetor de modo que p<=q<=r e A[p..q-1]<=A[q] < A[q+1..r]

PARTICIONE(A,p,r)
    x<-A[r]
    i<-p-1
    para j<-p até r-1
        faça se A[j]<=x
            então i <- i+1
                A[i]<->A[j]
    A[i+1]<->A[r]
    devolva i+1
```