#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, i, dp[93];
char fibo(ll n, ll i){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(i<=dp[n-2]) return fibo(n-2, i);
    else return fibo(n-1, i-dp[n-2]);
}

void solve(){
    cin >> n >> i;
    cout << fibo(n,i) << endl;
}
int main(){
    int t; cin >> t;
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3; i<=92; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    while(t--){
        solve();
    }
    return 0;
}