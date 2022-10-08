#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll Sum(ll a){
    ll sum = 1;
    for(ll i=2; i<=sqrt(a); i++){
        if(a%i==0){
            ll j=a/i;
            if(i==j) sum += i;
            else sum += i + j;
        }
    }
    return sum;
}
bool check(ll a, ll b){
    if(Sum(a) == b && Sum(b) == a) return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        if(check(a,b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}