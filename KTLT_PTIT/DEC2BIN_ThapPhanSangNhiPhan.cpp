#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s="";
        while(n>0){
            s = char(n%2+48) +s;
            n /= 2;
        }
        cout << s << endl;
    }
}