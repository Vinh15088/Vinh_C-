#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s; cin >> s;
    if(s/3600 < 10) cout << "0";
        cout << s/3600 << ":";
    if((s/60) % 60 < 10) cout << "0";
        cout << (s/60) %60 << ":";
    if(s%60 < 10) cout << "0";
        cout << s%60;
    return 0;
}