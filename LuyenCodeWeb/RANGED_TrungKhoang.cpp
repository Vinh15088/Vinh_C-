#include<bits/stdc++.h>
using namespace std;


int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(b<c || a>d) cout << "NO";
    else cout << "YES" << endl;
    return 0;
}