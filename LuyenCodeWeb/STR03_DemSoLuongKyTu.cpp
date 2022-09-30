#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        char c;
        cin >> c;
        if(c >= 'A' && c <= 'Z'){
            c += 32;
        }
        for(int i=0; i<s.length(); i++){
            if(c == s[i]) count++;
        }
        cout << count << endl;        
    }
}