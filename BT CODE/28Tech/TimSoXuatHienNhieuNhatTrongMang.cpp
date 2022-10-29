#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<ll ,int> mp;
        for(int i=0; i<n; i++){
            ll x; cin >> x;
            mp[x]++;
        }
        ll res, fre = INT_MIN;
        for(auto it:mp){
            if(it.second > fre){
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << " " << fre << endl;
    }
    return 0;
}