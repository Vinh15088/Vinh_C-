#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;
bool check(ll n){
    string s = to_string(n); // chuyen sang dang string
    string a = s;
    reverse(s.begin(), s.end()); // dao nguoc string
    if(s == a) {
        return true;
    }
    return false;
}
void solve(){
    ll n; cin >> n;
    if(check(n)){
        cout << n << endl;
        return;
    }
    pair<ll, ll> a, b;
    for(ll i=n; i<1e15; ++i){
        if(check(i)){
            a.first = i;
            a.second = abs(i-n);
            break;
        }
    }
    for(ll i=n; i>=1; --i){
        if(check(i)){
            b.first = i;
            b.second = abs(i-n);
            break;
        }
    }
    if(a.second == b.second) cout << min(a.first, b.first) << " " << max(a.first, b.first);
    else cout << (a.second < b.second ? a.first : b.first);
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}