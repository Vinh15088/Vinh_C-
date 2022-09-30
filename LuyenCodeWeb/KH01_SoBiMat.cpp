#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n+1];
    int sum1=0, sum2=0;
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        sum1 += a[i];
    }
    for(int i=1; i<=n; i++){
        sum2 += i;
    }
    cout << sum2-sum1 << endl;
    return 0;
}