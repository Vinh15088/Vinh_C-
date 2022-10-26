#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m;  
int gt(int n){
    int res = 1;
    for(int i=0; i<n; i++) res *= 2;
    return res;
} 
string 10sang2(){
    string s="";
    while(m!=0){
        s += char(m%2 + 48);
        m/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> m;
        string ss=10sang2();
        int n=ss.size();
        int mod = n%4;
        if(mod>0) ss=string(4-mod,'0') + ss;
        reverse(ss.begin(),ss.end());
        string res = "";
        for(int i=0; i<n; i++){
            int result = 0;
            for(int j=i; j<i+4; j++){
                if(ss[j] == '1') result+=gt(j-i);
            }
            if(result<10) res = char(result + 48) + res;
            else res = char(result%10 + 65) + res;
        }
        cout << res << endl;
    }
    return 0;
}