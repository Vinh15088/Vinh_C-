#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        // Cach 1: dung set
        string s;
        getline(cin, s);
        set<char> s;
        for(char x:s) s.insert(tolower(x));
        if(s.size() == 26) cout << "YES" << endl;
        else cout << "NO" << endl;


        // Cach 2: dung map
        string s;
        getline(cin, s);
        map<char, bool> mp;
        for(char x:s) mp[tolower(x)]=true;
        if(mp.size() == 26) cout << "YES" << endl;
        else cout << "NO" << endl;


        // Cach 3: dung mang danh dau
        string s; 
        getline(cin, s);
        int a[26] = {0};
        for(char x:s) a[tolower(x) - 'a'] = 1;
        int count = 0;
        for(int i=0; i<26; i++){
            count += a[i];
        }
        if(count == 26) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}