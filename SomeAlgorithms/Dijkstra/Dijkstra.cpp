#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define N 1001
#define maxi INT_MAX

vector<pii>grafos[N];
int dists[N];
priority_queue<pii,vector<pii>,greater<pii>>pq;
int dijkstra(int s){
	pq.push(make_pair(0,s));
	while(!pq.empty()){
		int d = pq.top().first;
		int v = pq.top().second;
		pq.pop();

		if(d>dists[v]) continue;

		for(auto i:grafos[v]){
			int de = i.second;
			int ve = i.first;
			if(d+de<dists[ve]){
				dists[ve]=d+de;
				pq.push(make_pair(d+de,ve));
			}
		}
	}
	return 0;
}
int main(){
	int n , m;
	cin >> n >> m;
	int u , v ,p;
	for(int i=0;i<m;i++){
		cin >> u >> v >> p;
		grafos[u].push_back(make_pair(v,p));
		grafos[v].push_back(make_pair(u,p));
	}
	for(int i=1;i<=n;i++){
		dists[i]=maxi;
	}
	int serv;
	cin >> serv;
	dists[serv]=0;
	dijkstra(serv);
	for(int i=1;i<=n;i++){
		cout << "dists[" << i << "] = " << dists[i] << endl;
	}
}