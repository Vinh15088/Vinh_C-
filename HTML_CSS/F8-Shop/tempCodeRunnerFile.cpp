#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(ll n){
    long long x = (n*(n+1)/2);
    return x;
}
ll sum1(ll r, ll l){
    return sum(l) - sum(r-1);
}
int main(){
    int t; cin >> t;
    while(t--){
        ll r, l; cin >> r >> l;
        cout << sum1(r,l) << endl;
    }
    return 0;
}