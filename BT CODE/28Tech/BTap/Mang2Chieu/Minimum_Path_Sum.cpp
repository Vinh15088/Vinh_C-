#include<bits/stdc++.h>
using namespace std;

void check(int a[105][105], int n, int m){
    int dp[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0) dp[i][j] = a[i][j];
            else if(j==0) dp[i][j] = dp[i-1][j] + a[i][j];
            else if(i==0) dp[i][j] = dp[i][j-1] + a[i][j];
            else dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + a[i][j];
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[n-1][m-1] << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[105][105];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        check(a, n, m);
    }
}