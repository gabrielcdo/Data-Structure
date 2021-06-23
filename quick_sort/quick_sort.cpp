#include <iostream>
using namespace std;
int particiona(int *arr , int start , int end){
  int pivo = arr[end];
  int pindex = start;
  int aux;
  for(int i = start ; i<end ; i++ ){
    if(arr[i]<=pivo){
      aux=arr[pindex];
      arr[pindex]=arr[i];
      arr[i]=aux;
      pindex++;
    }
  }
    aux = arr[pindex];
    arr[pindex]=arr[end];
    arr[end]=aux;
    return pindex;
}
void quicksort(int *arr , int start , int end){
  int p;
  if(start<end){
    p = particiona(arr , start , end);
    quicksort(arr , start , p-1);
    quicksort(arr,p+1,end);
  }
}
int main() {
   int vetor[] {7,2,1,6,8,5,3,4};
   quicksort(vetor, 0, 7);
   for(int i = 0 ; i < 8 ; i++){
     cout << vetor[i] << endl;
   }
}

/*
 7 2 1 6 8 5 3 4 
 pivo = 4 pindex = 0
 7 > 4
 2 <= 4 troca arr[i] com arr[pindex]
 2 7 1 6 8 5 3 4 pindex = 1 
 1 <= 4 trocar arr[i] com arr[pindex]
 2 1 7 6 8 5 3 4 pindex = 2 
 6 > 4 , 8 > 4 , 5 > 4 , 3<=4
 troca arr[i] com arr[pindex]
 2 1 3 6 8 5 7 4  pindex = 3
 troca arr[pindex] com pivo
 2 1 3 4 8 5 7 6
 todos antes da posição 3 são menores ou iguais a 4 e todos depois da posição 3 são maiores ou iguais a 4 , em seguida resta o quicksort irá chamar um quicksort(arr , start , pindex-1) e quicksort(arr , pindex+1 , end) */