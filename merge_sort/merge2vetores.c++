#include <iostream>
using namespace std;
// Ordenar um vetor de dois vetores ordenados

void merge2(int vetor[] ,int  p ,int n){
  int vetor1[p+1];
  int vetor2[n-p+1];
  
  for (int aux = 0 ; aux < p ; aux++){
    vetor1[aux]=vetor[aux];
  }
  vetor1[p]=9999;
  
  for ( int aux = 0; aux < n-p+1;aux++){
    vetor2[aux]=vetor[aux+p];
  }
  vetor2[n-p]=9999;
 
  int i = 0;
  int j = 0;

  for(int aux=0;aux<n;aux++){
    
    if(vetor1[i]<vetor2[j]){
      vetor[aux]=vetor1[i];
      i++;
    }else{
      vetor[aux]=vetor2[j];
      j++;
    }
    cout << vetor[aux] << endl;
    }
}
int main() {
  int vetor[] {1,2,3,4,5,6,3,4,5,6,7,8};
  merge2(vetor, 6, 12);
}