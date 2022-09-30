#include<bits/stdc++.h>
#define ll long long
#define FOR(i,r,l) for(int i=r; i<l; i++)
const ll MOD = 1e9+7;
using namespace std;
ll Solve(ll a, ll b){
	ll result = 1;
	while(b){
		if(b%2==1) result = result * a % MOD;
		b /= 2;
		a = a * a % MOD;
	}
	return result;
}	
ll StringSolve(string x, string y){
	ll a=0, b=0;
	FOR(i,0,x.length()) a =(a*10 + (x[i]-'0')) % MOD;
	FOR(i,0,y.length()) b =(b*10 + (y[i]-'0')) % (MOD-1);
	return Solve(a,b);
}
int main(){
	int t; cin >> t;
	while(t--){
		string x,y;
		cin >> x >> y;
		cout << StringSolve(x,y) << endl;
	}
	return 0;
}