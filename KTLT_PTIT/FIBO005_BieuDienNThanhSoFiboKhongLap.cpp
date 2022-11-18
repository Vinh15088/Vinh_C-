#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[93];

void fibo(){
    f[0] = 0; 
    f[1] = 1;
    for(int i=2; i<36; ++i){
        f[i] = f[i-1] + f[i-2];
    }
}

ll solve(ll n, ll sum, ll tmp){
    if(sum == n) return 1;
    if(sum > n) return 0;
    ll count = 0;
    for(int i=tmp; i<36; ++i){
        count += solve(n, sum+f[i], i);
    }
    return count;
}
int main(){
    fibo();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n,0,0) << endl;
    }
    return 0;
}