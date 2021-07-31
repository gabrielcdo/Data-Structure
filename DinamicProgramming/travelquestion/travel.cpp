#include <bits/stdc++.h>
using namespace std;
#define max 2e18;
int dist[1010];
int min(int pos){
  if(pos == 0){
    return 0;
  }
  long long pen , maxl = max ;
  for(int i=pos-1;i>=0;i--){
    pen=min(i)+pow(200-(dist[pos]-dist[i]),2);

    if(pen <maxl){
     maxl = pen;
    }
  }
  return maxl;
}
int main() {
  dist[0]=0;
  dist[1]=190;
  dist[2]=200;
  dist[3]=250;
  dist[4]=400;
  dist[5]=530;
  int a = min(5);
  cout << a;
}