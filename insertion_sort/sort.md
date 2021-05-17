# "Insertion Sort"

- Similar a ordenção de cartas de baralho
- pega-se uma carte de uma vez e as coloca em seu devido lugar , sempre deixando as cartas da mão em odem.

### "Performance"
- Melhor Caso: O(N)
- Pior Caso: O(N^2)
- Eficiente Para Conjuntos pequenos de dados
- Estável: não altera a ordem de dados iguais capaz de ordenar os dados a medida em que os recebe ( tempo real )

Algoritmo: Rearranja A[1 ... n] em ordem crescente.

Ordena_por_inserção(A,n)
    para j<-2 até n faça
        chave <-A[j]
        i <- j-1
        enquanto i>= 1 e A[i]>chave faça
            A[i+1]<-A[i]
            i<- i-1
        A[i+1] <-chave