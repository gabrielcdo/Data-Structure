#include <bits/stdc++.h>
// Kadane's Algorithm
using namespace std;
int t1 , t2;
int kadane(int vetor[6]){
  int j =0;
  int max_global = 0 , max_local = 0;
  for(int i = 0 ; i<6 ;i++){
    cout << "maior " << max_local << "\n";
    if(vetor[i]>=max_local+vetor[i]){
      max_local=vetor[i];
      j = i;
    }
    else{
      max_local = vetor[i]+max_local;
    }
    if(max_local>max_global){
      max_global = max_local;
      t1=j;
      t2=i;
    }
  }
  return max_global;
}
int main() {
  int arr[] {10,-2,4,4,2,1};
  int maior = kadane(arr);
  cout << t1 << " " << t2;
}