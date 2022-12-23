#include<bits/stdc++.h>
using namespace std;

int t, n, a[1005];
vector<string> v;

void solve(int n){
    if(n==0) return ;
    else {
        string s="";
        s += "[";
        for(int i=0; i<n-1; i++){
            s += to_string(a[i]) + ' ';
        }
        s += to_string(a[n-1]) + "]";
        v.push_back(s);
        for(int i=0; i<n-1; i++){
            a[i] = a[i]+a[i+1];
        }
    }
    solve(n-1);
}
int main(){
    cin >> t;
    while(t--){
        v.clear();
        cin >> n; 
        for(int i=0; i<n; i++){
            cin >> a[i]; 
        }    
        solve(n);
        for(int i=0; i<v.size(); i++){
            cout << v[i] << endl;
        }
    }
    return 0;
}