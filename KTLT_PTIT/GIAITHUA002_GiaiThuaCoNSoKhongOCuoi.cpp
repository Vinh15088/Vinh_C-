#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll check(ll n){
    ll res = 0;
    ll tmp = 5;
    while(tmp <= n){
        res += n/tmp;
        tmp *= 5;
    }
    return res;
}

void Solve(){
    ll n; cin >> n;
    if(n==1) {
        cout << 5 << endl; 
        return;
    }
    ll l = 1, r = 5*n;
    while(l < r){
        ll mid = (l+r)/2;
        if(check(mid) >= n) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}