#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; 
    cin >> n;
    int a[n], res = INT_MAX;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=1; i<n; i++){
        res = min(res, a[i] - a[i-1]);
    }
    cout << res;
    return 0;
}