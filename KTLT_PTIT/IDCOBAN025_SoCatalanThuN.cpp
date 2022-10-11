#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[32];
int main(){
    int t; cin >> t;
    a[0] = a[1] = 1;
    for(int i=1; i<=30; i++){
        for(int j=0; j<=i; j++){
            a[i+1] += a[j] * a[i-j];
        }
    }
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}