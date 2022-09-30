#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll solve(string s, int n){
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1') sum |= 1 << (n-1-i);
    }
    return sum;
}
ll In(string a, string b, int n){
    ll aa = solve(a,n);
    ll bb = solve(b,n);
    if(aa == bb) return 0;
    return (aa > bb) ? (aa - bb - 1) : (bb - aa - 1);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        string x, y; 
        cin >> n >> x >> y;
        cout << In(x,y,n) << endl;
    }
    return 0;
}