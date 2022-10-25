#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a, ll b){
    ll answer = 1;
    while(b){
        if(b%2==1) answer *= a;
        a *= a;
        b /= 2;
    }
    return answer;
}
ll solve(ll m, ll n, ll x){
    ll answer = power(x,n);
    if(answer == m) return 1;
    if(answer > m) return 0;
    ll a1 = solve(m - answer, n, x+1);
    ll a2 = solve(m, n, x+1);
    return a1+a2;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll m, n; cin >> m >> n;
        cout << solve(m,n,1) << endl;
    }
    return 0;
}