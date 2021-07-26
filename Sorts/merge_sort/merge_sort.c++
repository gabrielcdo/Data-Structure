#include <iostream>
using namespace std;
//merge function
void merge(int vetor[] , int l , int m , int r){
  int vetor1[m-l+2];
  int vetor2[r-m+1];
  for (int aux = 0 ; aux < m-l+1; aux++){
    vetor1[aux]=vetor[aux+l];
  }
  vetor1[m-l+1]=9999;
  for(int aux = 0;aux<r-m;aux++){
    vetor2[aux]= vetor[aux+m+1];
  }
  vetor2[r-m]=9999;
  int i = 0;
  int j = 0;
  for(int aux=l;aux<=r;aux++){
    if(vetor1[i]<vetor2[j]){
      vetor[aux]=vetor1[i];
      i++;
    }else{
      vetor[aux]=vetor2[j];
      j++;
    }
  }
}
//merge sort
void merge_sort(int vetor[] , int l , int r){
  if(l < r){
    int aux = (l+r)/2;
    merge_sort(vetor , l , aux );
    merge_sort(vetor , aux+1 , r );
    merge(vetor , l , aux , r);
  }
}
int main() {
  int vetor[] {12,11,10,9,8,7,6,5,4,3,2,1};
  merge_sort(vetor, 0, 11);
  cout << endl << endl << endl ;
  for(int cont1 = 0;cont1<12;cont1++){
    cout << vetor[cont1] << " ";
  }
}