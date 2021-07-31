# Kodane's Algorithm
## Encontra a maior soma se um subarray de A.

```
Kadane(A,n)
    max_global = 0
    max_local = 0
    para i<-0 até n-1 faça 
        se 0>max_local
            max_local = A[i]
        se não
            max_local = max_local+A[i]
        se max_local > max_global
            max_global = max_max_local
    retorna max_global
```
## Invariants loops
- para uma posição i , max_local representa a maior sequencia da posição anterior ou 0 para i=0 , tal que a maior sequencia que se encerra nessa mesma posição é A[i]+max_local para max_local>0 ou A[i] para max_local < 0
- se max_local for maior que a maior sequencia até então, a maior sequencia se torna max_local


1. Inicialização
- Antes da primeira iteração , max_local e max_global são nulos e para primeira posição de i é verdadeiro a invariante.
2. Manunteção
- Temos odis casos , a depender da linha 4. Quando max_local maior que zero a maior sequencia que se encerra na posição i se torna max_local+A[i], tendo em vista que a soma de dois positivos é maior que ambos positivos, caso contrário , a maior sequencia que se encerra nesta posição é o própio valor de A[i], já que a um valor qualque é maior que sua soma a um valor negativo.Além disso, caso a maior seja que se encerra na posição i seja maior que a maior sequencia até então , a maior sequencia até então se torna max_local, assim sendo verdadeiras as invariantes.
3. Término
- quando o programa termina , max_global representa a maior sequencia até então , assim a partição obteve sucesso
consumo de tempo de kadane's()
O(n)