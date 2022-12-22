#include<bits/stdc++.h>
using namespace std;

string lower(string s){
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string s;  getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        string ns = v[v.size() - 1]; // lay ngay sinh
        string email = lower(v[v.size()-2]); // lay ten
        for(int i=0; i<v.size()-2; i++){
            email += tolower(v[i][0]); // chuyen nhung chu cai dau tien cua ten ho va dem ve in thuong
        }
        mp[email]++;
        if(mp[email] == 1) cout << email << "@xyz.edu.vn" << endl;
        else cout << email << mp[email] << "@xyz.edu.vn" << endl;
        stringstream ss2(ns);
        while(getline(ss2, tmp, '/')){
            cout << stoi(tmp);
        }
        cout << endl;
    }

}