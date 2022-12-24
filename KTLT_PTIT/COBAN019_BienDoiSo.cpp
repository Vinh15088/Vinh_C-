#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tinh(ll n){
  	if(n <= 1) return n;
  	ll x=sqrt(n);
  	ll a = n%2+tinh(n/2), b = n%3+tinh(n/3), c = n-x*x+tinh(x);
  	return 1+min(a, min(b,c));
}
int main() {
  	int t; cin >> t;
  	while(t--){
    	ll n; cin >> n;
    	cout << tinh(n) << endl;
  	}
	return 0;
}