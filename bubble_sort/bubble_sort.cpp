#include <iostream>
using namespace std;
void bublesort(int vetor[] , int tamanho){
  int aux;
  while(tamanho>0){
    for(int i=0;i < tamanho-1 ; i++){
      if(vetor[i]>vetor[i+1]){
        aux = vetor[i+1];
        vetor[i+1]=vetor[i];
        vetor[i]=aux;
      }}
  tamanho--;      
  }
}
int main() {
  int vetor[] {10 , 7 , 6 , 5 , 4, 3};
  bublesort(vetor,6);
  for(int i = 0 ; i<6;i++){
    cout << vetor[i] << endl;
  }
}