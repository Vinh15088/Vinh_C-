#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m;
int gt(int n){
    int res = 1;
    for(int i=0; i<n; i++){
        res *= 2;
    }
    return res;
}
string thapsangnhi(){
    string s = "";
    while(m!=0){
        s += char(m%2 + 48);
        m /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> m;
        string s=thapsangnhi();
        int n=s.size();
        int mod = n%4;
        if(mod > 0) s = string(4-mod,'0') + s;
        reverse(s.begin(), s.end());
        string result = "";
        for(int i=0; i<n; i+=4){
            int res = 0;
            for(int j=i; j<i+4; j++){
                if(s[j] == '1') res += gt(j-i);
            }
            if(res<10) result = char(res + 48) + result;
            else result = char(res%10 + 65) + result;
        }
        cout << result << endl;
    }
    return 0;
}