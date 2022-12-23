#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1005][1005];
ll F1[1005][1005], F2[1005][1005];

int main(){
    int n, m; cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
            F1[i][j] = F1[i][j-1] + a[i][j];
            F2[i][j] = F2[i-1][j] + a[i][j];
        }
    }
    int t; cin >> t;
    while(t--){
        int tt; cin >> tt;
        if(tt==1){
            int x, y, z; cin >> x >> y >> z;
            cout << F1[x][z] - F1[x][y-1] << endl;
        }
        if(tt==2){
            int x, y, z; cin >> x >> y >> z;
            cout << F2[z][x] - F2[y-1][x] << endl;
        }
    }
    return 0;
}