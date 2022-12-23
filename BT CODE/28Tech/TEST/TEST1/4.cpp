#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string, pair<string, bool>> mp;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s; getline(cin, s);
        vector<string> v;
        string tmp;
        stringstream ss(s);
        while(ss > tmp){
            v.push_back(tmp);
        }
        string msv = v[0], hoten = "";
        for(int i=1; i<v.size(); i++){
            hoten += v[i] + " ";
        }
        hoten.push_back();
        mp[msv].first = hoten;
        mp[msv].second = true;
    }

    int m; cin >> m;
    set<string> duthi;
    for(int i=0; i<m; i++){
        string x, y, z, t; 
        cin >> x >> y >> z >> t;
        if(t != "code.ptit.edu.vn") mp[z].second = false;
        if(t == "code.ptit.edu.vn") duthi.insert(z);
    }
    for(auto it:mp){
        cout << it.first << " " << it.second.first << " ";
        if(it.second.second == false || duthi.count(it.first)==0){
            cout << "FAIL" << endl;
        }
        else{
            cout << "OK" << endl;
        }

    }
    return 0;
}