#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    if(n<0) n=-n;
    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        if( ((i+1)%2) != ((s[i]-'0')%2) ) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}