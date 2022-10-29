#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin >> a[i];
    int prefix[n+1] = {0};
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1] + a[i];
    }
    int k; cin >> k;
    while(k--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
    return 0;
}