#include <bits/stdc++.h>
using namespace std;
// Methode "Brute Force"
int maxi = 0;
int esq , dir;
void compara(string texto , int inicio , int end){
	int i = inicio , e = end , size = 0;
	while(i<=e){
		if(texto[i]==texto[e]){
			i++;
			e--;
			size++;}
		else{
			compara(texto , inicio , end-1);
            return ;
		}
	}
	if(maxi<size){
		esq = inicio;
		dir = end;
        maxi = size;
        return ;}
	
}
int main() {
    string texto;
	cin >> texto;
	for(int i = 0 ; i<texto.size()-1;i++){
		compara(texto, i , texto.size()-1);
	}
    for(int i = esq;i<=dir;i++){
        cout << texto[i];
    }
    cout << "\n";
}
//input: gabrielcampos123321
//output: 123321 
