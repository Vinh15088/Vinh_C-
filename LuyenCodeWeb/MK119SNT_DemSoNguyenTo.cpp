#include<bits/stdc++.h>
#define for(i,r,l) for(int i=r; i<=l; i++)
#define ll long long
const int Nmax = pow(10,6);

using namespace std;
int t, l, r;
bool snt[10000001];
int ans[10000001];
void solve(){
    int i=2;
    snt[1] = true;
    while(i<=1000){
        while(snt[i] == true) i++;
        for(j,2,Nmax/i) snt[i*j] = true;
        i++;
    }
    ans[0]=0;
    for(i,1,Nmax){
        ans[i] = ans[i-1] + abs((int) snt[i] -1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    cin >> t;
    while(t--){
        cin >> l >> r;
        cout << ans[r] - ans[l-1] << endl;
    }
    return 0;
}
