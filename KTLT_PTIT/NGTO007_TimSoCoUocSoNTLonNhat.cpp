#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n){
    if(n<2) return 0;
    if(n%2==0 || n%3==0) return 0;
    for(ll i=5; i<=sqrt(n); i+=6){
        if(n%i==0 || n%(i+2)==0) return 0;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        for(int i=m; i>=n; i--){
            if(check(i)){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}