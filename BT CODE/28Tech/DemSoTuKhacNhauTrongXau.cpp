#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        // // Cach 1: dung set
        // string a;
        // getline(cin, a);
        // set<string> s;
        // stringstream ss(a); // dung de tach cac tu trong xau
        // string word;
        // while(ss >> word){
        //     s.insert(word);
        // }
        // cout << s.size() << endl;


        // Cach 2: dung map
        string s;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> mp;
        string word;
        while(ss >> word){
            mp[word]++;
        }
        cout << mp.size() << endl;

    }
    return 0;
}