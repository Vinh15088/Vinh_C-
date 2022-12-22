#include<bits/stdc++.h>
using namespace std;

int n, a[105][105], F[105][105];

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        F[i][1] = a[i][1];
        F[0][i] = F[n+1][i] = -1e9;
    }
    for(int j=2; j<=n; j++){
        for(int i=1; i<=n; i++){
            F[i][j] = max(F[i-1][j-1], max(F[i][j-1], F[i+1][j-1])) + a[i][j];
        }
    }
    int ans = -1e9;
    for(int i=1; i<=n; i++){
        ans = max(ans, F[i][n]);
    }
    cout << ans << endl;
    return 0;
}