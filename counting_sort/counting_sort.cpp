#include <iostream>
using namespace std;
int aux[999];
int main() {
  int vetor[]{5,4,3,2,1,0};
  for(int i=0;i<=5;i++){
    aux[vetor[i]]++;
  }
  int j;
  for(int i = 0 ; i<=5;i++){
    for(int k = aux[vetor[i]]; k > 0 ; k--){
      vetor[j]=i;
      j++;
    }

  }
  for(int i = 0;i<6;i++){
    cout << vetor[i] << endl;
  }
}