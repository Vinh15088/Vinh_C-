#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
        while(s[0] == '0') s.erase(0,1);
    if(s[s.size()-1] == '-') s.erase(s.size()-1,1);
    cout << s;

}