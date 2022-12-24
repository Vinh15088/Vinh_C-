#include<bits/stdc++.h>
#define N 21
#define pb push_back
#define X first
#define	Y second
#define oo 1000111000
#define f1n(i, n) for(int i=1; i<=n; i++)
using namespace std;
typedef pair<int, int> ii;
int m, n, u, v, c;
vector<ii> a[N];
vector<bool> visited(N);
unordered_map< vector<bool>, int> F[N];

int f(int u, int cnt){
	if (cnt==n+1) return 0;
	if (F[u].count(visited)) return F[u][visited];
	int r= oo;
	for(auto p:a[u]){
		int v= p.X, c= p.Y;
		if (not visited[v])	
		if ((v==1 && cnt==n) || v!=1){ 
			visited[v]= true;
				r= min(r, f(v, cnt+1) + c);	
			visited[v]= false;
		}
	}
	return F[u][visited]= r;
}
int main(){	
	cin >> n >> m;
	f1n(i, m){
		cin >> u >> v >> c;	
		a[u].pb(ii(v, c));		
	} 
	cout<<f(1, 1);
}