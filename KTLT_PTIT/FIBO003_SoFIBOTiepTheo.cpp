#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll f[93];
map<ll, ll> a;
ll check(){
    f[0] = 0, f[1] = 1;
    for(int i=2; i<=93; ++i){
        f[i] = f[i-1] + f[i-2];
        a[f[i]] = 1;
    }
}
void solve(){
    ll n; cin >> n; n++;
    while(true){
        if(!a.count(n)){
            cout << n << endl;
            return;
        }
        n++;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        check();
        solve();
    }
    return 0;
}