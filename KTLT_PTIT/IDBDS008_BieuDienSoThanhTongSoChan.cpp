#include<bits/stdc++.h>
#define ll long long
const int mod=1e9 + 7;
using namespace std;
ll solve(int n){
    if(n==0) return 1;
    if(n%2!=0) return (2*solve(n-1)) % mod;
    ll result = solve(n/2);
    return (result*result) % mod;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n%2!=0) cout << "-1" << endl;
        else {
            if(n==2) cout << "1" << endl;
            else cout << solve((n-2)/2) << endl;
        }
    }
    return 0;
}