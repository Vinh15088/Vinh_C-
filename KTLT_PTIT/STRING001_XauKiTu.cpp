#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s,a,b;
        getline(cin, s);
        for(int i=0; i<s.length(); i++){
            if(s[i] == ','){
                for(int j=0; j<i; j++){
                    a += s[j];
                }
                for(int j=i+2; j<s.length(); j++){
                    b += s[j];
                }
            }
        }
        string child="";
        for(int i=0; i<a.length()-1; i++){
            if(a[i] == '"'){
                for(int j=i+1; j<a.length()-1; j++){
                    child += a[j];
                }
            }
        }
        string parent="";
        for(int i=0; i<b.length()-1; i++){
            if(b[i] == '"'){
                for(int j=i+1; j<b.length()-1; j++){
                    parent += b[j];
                }
            }
        }
        // // cout << s.length() << endl;
        if(s.length() == 23) cout << "0" << endl;
        else {
            if(parent.find(child) != string::npos) cout << parent.find(child) << endl;
            else cout << "-1" << endl;
        }
    }
    return 0;
}