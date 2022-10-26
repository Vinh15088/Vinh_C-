#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n){
    if(n<2) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(ll i=3; i<=sqrt(n); i+=2)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}