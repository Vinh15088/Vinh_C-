#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    cin.ignore();
    map<string, int> mp;
    while(t--){
        string username;
        getline(cin, username);
        if(mp.find(username) == mp.end()) {
            cout << username << endl;
        }
            
        else {
            cout << username << mp[username] << endl;
        }
            
        mp[username]++;
    }
    return 0;
}