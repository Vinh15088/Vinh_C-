#include<bits/stdc++.h>
using namespace std;
int dx[3] = {0, -1, 1};
int dy[3] = {1, 1, 1};
int a[105][105], m, n;
int check(int a[105][105], int x, int y){
    int result = a[x][y];
    for(int i=y+1; i<=n; i++){
        for(int i)
    }
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