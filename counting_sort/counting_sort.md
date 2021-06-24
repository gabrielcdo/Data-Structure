# CountingSort ou Ordenação por Contagem
- Usa um array auxiliar de tamanho igual ao maior valor a ser ordenado
- Array auxiliar é usado para contar quantas vezes cada valor ocorre
- Valor a ser ordenado é tratado como índice
- Percorre o array auxiliar verificando quais valores existem e os coloca no array ordenado
## "Performance" 
- Complexidade é O(N+K), onde K é o tamanho do array auxiliar 
- Não recomendado para grandes conjuntos de dados (K muito grande)
- Ordena valores inteiros positivos (pode ser modificado para outros valores)
- Processamento simples 
- Estável: não altera  ordem de dados iguais

```
Couting-Sort(A,B,n,k)
    para i<-0 até k faça 
        C[i]<-0
    para j<-1 até n faça
        C[A[j]]<-C[A[j]]+1
    >C[i] é o número de js tais que A[j]=i
    para i<-1 até k faça
        C[i]<-C[i]+C[i-1]
    >C[i] é o número de js tais que A[j]<=i
    para j<-n decrescendo até 1 faça
        B[C[A[j]]]<-A[j]
        C[A[j]]<- C[A[j]]-1
// Obs: são feitas 0 comparações entre elementos do vetor
```