#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << "\n" << (#x) << " is " << (x) << endl;
const int N = 1e5+2;
bool vis[N];
vector<int>adj[N];
void dfs(int node){
    vis[node]=true;
    cout << node << " ";
    for(auto v:adj[node]){
        if(!vis[v]){
            dfs(v);
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
    dfs(1);
}