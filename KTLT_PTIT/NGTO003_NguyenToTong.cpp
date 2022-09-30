#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n){
    if(n==0 || n==1) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0 || n%3==0) return 0;
    for(ll i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        for(ll i=n; i<=10*n; i++){
            if(i%2!=0){
                if(check(i) && check(i-2)){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}