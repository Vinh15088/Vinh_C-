#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef unsigned long long ll;
const int mod = 998244353;
int t;
ll a,b,c;
ll solve(ll a, ll b, ll c){
    a = (a * (a+1)/ 2) % mod;
    b = (b * (b+1)/ 2) % mod;
    c = (c * (c+1)/ 2) % mod;
    ll ans = ((a*c) % mod * b) % mod;
    return ans;
}

int main(){
    fast();
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << solve(a,b,c) << endl;
    }
    return 0;
}