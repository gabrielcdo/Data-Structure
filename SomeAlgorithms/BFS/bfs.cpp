#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << "\n" << (#x) << " is " << (x) << endl;
const int N = 1e5+2;
bool vis[N];
vector<int>adj[N];
void bfs(int node){
   queue<int>fila;
   fila.push(node);
   while(!fila.empty()){
       int v = fila.front();
       fila.pop();
       vis[v]=true;
       for(auto i:adj[v]){
           if(!vis[i]){
               fila.push(i);
           }
       }
   }
}
int main()
{
    int n,m;
    cin >> n >> m;
    int x , y;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
}