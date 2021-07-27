#include <bits/stdc++.h>
using namespace std;
string texto;
set<string>mapa;
bool teste = false;
void resolves(int start , queue<int>posi){
    posi.push(start);
    if(texto[start]=='\0'){
      cout << "\n\nTexto corretamente transformado a seguir:";
      for(int j=0;j<texto.size();j++){
        if(j==posi.front()){
          cout << " ";
          posi.pop();
        }
        cout << texto[j];
      }

      teste = true;
    }
    string palavra;
    for(int i = start;texto[i]!='\0';i++){
        palavra.push_back(texto[i]);
        if(mapa.count(palavra)){
            cout << palavra << " ";
            resolves(i+1,posi);
        }
    }
}
int main(){
    queue<int>posi;
    cout << posi.size();
    texto = "euamoprogramaçãodinamica";
    mapa.insert("eu");
    mapa.insert("amo");
    mapa.insert("programação");
    mapa.insert("dinamica");
    resolves(0,posi);
    if(teste == false){
      cout << "\n\nnem todas palavras usadas estão no nosso dicionário :(";
    }

}

// it works :)