#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(ll n, int k){
    int count = 0;
    while(n>0){
        ll m = n%2;
        if(m==0) count++;
        n /= 2;
    }
    if(count == k) return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; int k;
        cin >> n >> k;
        int count = 0;
        for(ll i=1; i<=n; i++){
            if(check(i,k)) count++;
        }
        cout << count << endl;
    }
    return 0;
}