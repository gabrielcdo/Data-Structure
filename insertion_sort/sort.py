def insertion_sort(vetor):
  for j in range ( 1 , len(vetor)):
    chave = vetor[j]
    i = j - 1 
    while i >= 0 and vetor[i] > chave:
      vetor[i+1] = vetor[i]
      i-=1
    vetor[i+1]=chave

vetor = [ 5 , 3 , 2 , 4, 9 , 12 , 3]
insertion_sort(vetor)
print(vetor)