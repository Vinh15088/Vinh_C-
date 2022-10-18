#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll check(ll a, ll b, ll c){
	ll result = 1;
	while(b){
		if(b%2==0){ // x&1 == x%2
			result = (result * a) % c;
		}
		a = (a*a) % c;
		b >>= 1; // >>= == /=
	}
	return result;
}
void solve(){
	ll a, b, m;
	cin >> a >> b >> m;
	ll result;
	double y = (double) b * log10(a*1.0);
	y = y - (ll)y;
	double temp = pow(10.0, y);
	result = temp * (1ll) * pow(10, m-1);
	cout << result << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}