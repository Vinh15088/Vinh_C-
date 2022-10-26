#include<bits/stdc++.h>
using namespace std;
int a[10005][10005];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin >> a[i][j];
        for(int i=1; i<=n; i++)
            a[i][0]=a[i][m+1]=-100005;
        for(int i=2; i<=n;i++)
            for(int j=1; j<=m; j++)
                a[i][j] = max(max(a[i-1][j-1], a[i-1][j]),a[i-1][j+1]) + a[i][j];
        int maxx = a[n][1];
        for(int j=2; j<=m; j++)
            maxx = max(maxx,a[n][j]);
        cout << maxx << endl;
    }
}
