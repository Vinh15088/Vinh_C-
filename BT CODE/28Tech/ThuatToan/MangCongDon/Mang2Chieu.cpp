#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n+1][m+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    // tao prefix_sum (mat khong gian O(1))
    int pre[n+1][m+1] = {0};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int k; cin >> k;
    while(k--){
        
        //Cach lam binh thuong
        // int h1, h2, c1, c2;
        // cin >> h1 >> h2 >> c1 >> c2;
        // int sum = 0;
        // for(int i=h1; i<=h2; i++){
        //     for(int j=c1; j<=c2; j++){
        //         sum += a[i][j];
        //     }
        // }

        // Cach lam theo prefix sum
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << (pre[h2][c2] - pre[h1-1][c2] - pre[h2][c1-1] + pre[h1-1][c1-1]) << endl;
    }
    return 0;
}