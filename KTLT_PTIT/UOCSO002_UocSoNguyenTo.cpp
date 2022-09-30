#include<bits/stdc++.h>
#define faster() \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define ll long long
using namespace std;
int check(ll n){
    ll count = 0;
    while(n>0){
        ll k = n%10;
        n /= 10;
        if(k!=2 && k!=3 && k!=5 && k!=7) count++;
    }
    if(count == 0) return 1;
    return 0;
}
int main(){
    faster();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count = 0;
        for(int i=1; i<=n; i++){
            if(check(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}