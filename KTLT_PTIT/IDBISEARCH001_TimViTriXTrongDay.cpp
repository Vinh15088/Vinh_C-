#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int m, n, num, a[100001];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> num;
        int pos = lower_bound(a,a+n,num) - a;
        if(a[pos] != num) cout << 0 << " ";
        else cout << pos + 1 << " ";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}