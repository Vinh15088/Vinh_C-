#include<bits/stdc++.h>
using namespace std;
int a[105][105], m, n;
int minn(int a, int b, int c){
    int min1 = b;
    if(min1 > a) min1 = a;
    if(min1 > c) min1 = c;
    return min1;
}
int check(int a[105][105], int x, int y){
    int result = a[x][y];
    for(int i=m; i<=m+2; i++){
        for(int j=n; j<=n+2; j++){
            a[i][j] = 1005;
        }
    }
    for(int j=y; j<=n; j++){
        for(int i=x; i<=m; i++){
            result = result + minn(a[i-1][j+1], a[i][j+1], a[i+1][j+1]);
        }
    }
    return result;
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