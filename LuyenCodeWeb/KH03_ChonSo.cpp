#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], b[1001] = {0};
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a,a+n);
    int res = b[1] + b[0];
    for(int i=2; i<=1000; i++){
        res = max(res, b[i] + b[i-1]);
    }
    cout << res;
    return 0;
}