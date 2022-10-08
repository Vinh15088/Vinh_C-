#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n){
    ll res = 1;
    for(int i=0; i<n; i++){
        res *= 2;
    }
    return res;
}
int main(){
    ll a[64];
    for(int i=0; i<63; i++){
        a[i] = solve(i);
    }
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        reverse(s.begin(), s.end()); // dao nguoc thu tu cua chuoi
        int n = s.size();
        ll res = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                res += a[i];
            }
        }
        cout << res << endl;
    }
    return 0;
}