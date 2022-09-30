#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power_modulo(ll a, ll b, ll p){
    ll ret = 1;
    a %= p;
    b %= p-1;
    while(b>0){
        if(b%2 > 0) ret = ret * a%p;
        a = a * a % p;
        b /= 2;
    }
    return ret;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;
        cout << power_modulo(a,b,1000000007) << endl;

    }
    return 0;
}