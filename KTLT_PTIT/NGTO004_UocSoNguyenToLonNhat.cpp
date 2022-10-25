#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n){
    if(n==2) return 1;
    if(n<2 || n%2==0) return 0;
    for(ll i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
ll UocSo(ll n){
    ll x;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(check(n/i)) return n/i;
            else if(check(i)) x=i;
        }
    }
    return x;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >>n;
        cout << UocSo(n) << endl;
    }
    return 0;
}