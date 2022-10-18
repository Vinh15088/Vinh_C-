#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll Check(ll n){
    ll k = sqrt(n);
    if(k != sqrt(n)) return 0;
    while(n>0){
        ll m = n%10;
        if(m!=0 && m!=1 && m!=4 && m!=9) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n==1) cout << 0 << endl;
        else {
            for(ll i=pow(10, n-1); ; i++){
                if(Check(i)) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}