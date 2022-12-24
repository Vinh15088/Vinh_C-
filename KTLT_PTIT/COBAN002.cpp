#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll Check(ll n){
    ll k = sqrt(n);
    if(k != sqrt(n)) return 0;
    while(n>10){
        ll m = n%10;
        if(m==2 || m==3 || m==5 || m==6 || m==7 || m==8) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        ll p = pow(10,k-1), l;
        if(sqrt(p) * sqrt(p) == p) l=sqrt(pow(10,k-1));
        else l=sqrt(pow(10,k-1)) + 1;
        ll r=sqrt(pow(10,k)-1);
        ll cp, res =1;
        if(k==1) cp=1;
        else{
            for(ll i=l; i<=r; i++){
                res = 1;
                cp = i*i;
                if(Check(cp)) break;
            }
        }
        if(!res) cout << -1 << endl;
        else cout << cp << endl;
    }
    return 0;
}