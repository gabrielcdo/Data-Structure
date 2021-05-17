def merge(vetor , n , j):
  vetor1=[]
  vetor2=[]
  for i in range (j):
    vetor1.append(vetor[i])
  vetor1.append(9999)
  for i in range(n-j):
    vetor2.append(vetor[i+j])
  vetor2.append(9999)
  i = 0 
  j = 0
  for l in range (n):
    if vetor1[i]<vetor2[j]:
      vetor[l]=vetor1[i]
      
                      
      i+=1
    else:
      vetor[l]=vetor2[j]
      j+=1

vetor = [ 1 , 2 ,3 ,4 ,5 , 3 , 4 ,5 ,6 ,7  ]
merge(vetor , 10 , 5)
print(vetor)
# 1 , 2 , 3 ,3 ,4 ,4 ,5 ,5 ,6 ,6 , 7