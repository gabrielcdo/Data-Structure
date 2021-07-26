# Kodane's Algorithm
## Encontra a maior soma se um subarray de A.

```
Kadane(A,n)
    max_global = 0
    max_local = 0
    para i<-0 até n-1 faça 
        se A[i]>max_local+A[i]
            max_local = A[i]
        se não
            max_local = max_local+A[i]
        se max_local > max_global
            max_global = max_max_local
    retorna max_global
```