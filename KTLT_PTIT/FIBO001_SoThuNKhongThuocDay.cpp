#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll check(ll n){
    ll a=1, b=2, c=3;
    while(n>0){
        a=b;
        b=c;
        c = b + a;
        n = n - (c - b - 1);
    }
    n = n + (c - b -1);
    return b + n;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}
