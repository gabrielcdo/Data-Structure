#include <iostream>
using namespace std;

void insertionSort( int arr[] , int n){
  
  for(int j=1 ; j<n; j++){
    int chave = arr[j];
    int i = j - 1;
    while( i >= 0 && arr[i] > chave){
      arr[i+1]=arr[i];
      i--;
    }
    arr[i+1] = chave;

  }
}
int main() {
  int vetor[] {5 , 3 , 2 , 4};
  
  insertionSort(vetor , 4);
  for(int aux = 0 ; aux < 4 ; aux++){
    cout << vetor[aux] << endl;
  }
}