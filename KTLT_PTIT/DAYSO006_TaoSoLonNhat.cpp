#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        sort(s.rbegin(), s.rend());
        for(int i=0; i<n; i++){
            cout << s[i];
        }
        cout << endl;
    }
}