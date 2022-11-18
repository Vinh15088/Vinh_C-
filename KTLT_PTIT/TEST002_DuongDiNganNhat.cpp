#include<bits/stdc++.h>
using namespace std;;
int a[105][105], m, n;
int check(int a[105][105], int x, int y){
    int result = a[x][y];
    for(int j=y; j<=n; j++){
        for(int i=1; i<=m; i++){
            if(i==1) a[i][j] += min(a[i][j+1], a[i+1][j+1]);
            else if(i==m) a[i][j] += min(a[i][j+1], a[i-1][j+1]);
            else a[i][j] += min(a[i+1][j+1], min(a[i][j+1], a[i-1][j+1]));
        }
    }
    int res = INT_MAX;
    for(int i=1; i<=m; i++){
        res = min(res, a[i][n]);
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> m >> n;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        int x, y; cin >> x >> y;
        cout << check(a,x,y) << endl;
    }
    return 0;
}