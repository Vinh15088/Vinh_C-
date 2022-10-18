#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ll TinhFibo(ll n){
//     if(n==1 || n==2) return 1;
//     return TinhFibo(n-1) + TinhFibo(n-2);
// }
// qua hàm trên, tính được số fibo nhỏ hơn 1e9 là số thứ 44
ll fibo[93], a[93];
void solve(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=93; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
        if(!(fibo[i] & 1)) a[i] = fibo[i]; // != so le thi +=
    }
}
int main(){
    // ll n; cin >> n;
    // cout << TinhFibo(n) << endl;
    int t; cin >> t;
    while(t--){
        solve();
        ll n, i = 0, result = 0; cin >> n;
        while(a[i] <= n){
            result += a[i];
            i++;
        }
        cout << result << endl;
    }
    return 0;
}