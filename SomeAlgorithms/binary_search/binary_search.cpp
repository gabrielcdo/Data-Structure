#include <iostream>
using namespace std;

int binary_search( int vetor[] , int value , int n){
    int left = 0 , right = n - 1;
    int mid;
    while(left  <= right ){
        mid = (left + right)/2;
        if(value > vetor[mid]){
            left = mid + 1;
        }
        else if ( value < vetor[mid]){
            right = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
  }

int main() {
    int n , number;
    scanf("%d", &n);
    scanf("%d", &number);
    int vetor[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d", &vetor[i]);
    }
    cout << binary_search(vetor , number , n );

  
}