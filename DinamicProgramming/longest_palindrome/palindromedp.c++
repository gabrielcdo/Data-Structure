#include <bits/stdc++.h>
using namespace std;
// Methode "Dinamic Programming"

	
void highest_padrindrome(string texto , int n){
    bool m[n][n];
    int start , end , highest = 1;
    for(int i = 0 ; i<n;i++){
        m[i][i]=true;
    }
    for(int i = 0;i<n-1;i++){
        if(texto[i]==texto[i+1]){
            m[i][i+1]=true;
            highest = 2;
            start = i;
            end = i+1;
        }
    }
    for(int k = 3 ; k<n;k++){
        for(int i = 0;i<n-k;i++){
            if(texto[i] == texto[i+k] && m[i+1][i+k-1]){
                m[i][i+k]=true;
                if(k>highest){
                    start = i;
                    end = i+k;
                    highest = k;
                }
            }    
        }
    }
    cout << "The highest palindrome in the string is: \n";
    for(int i = start ; i<=end;i++){
        cout << texto[i];
    }
}
int main() {
    string texto;
	cin >> texto;
    highest_padrindrome(texto , 19);   
}
//input: gabrielcampos123321
//output: 123321 
