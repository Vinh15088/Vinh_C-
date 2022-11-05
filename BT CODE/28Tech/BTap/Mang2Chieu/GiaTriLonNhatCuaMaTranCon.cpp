#include<bits/stdc++.h>
using namespace std;
#define ll long long
int major[105][105], minor[105][105];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n; 
        int a[n+1][n+1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> a[i][j];
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i==1 || j==1) major[i][j] = a[i][j];
                else major[i][j] = a[i][j] + major[i-1][j-1];
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1 || j==n) minor[i][j] = a[i][j];
                else minor[i][i] = minor[i-1][j+1] + a[i][j];
            }
        }
        long long ans = -1e18;
        for(int i=n; i>=1; i--){
            for(int j=n; j>=1; j--){
                int tmp = min(j,i);
                int hang = i-tmp, cot = j-tmp;
                for(int k=0; k<min(i,j); j++){
                    ans = max(ans, 0ll + major[i][j] - major[hang+k][cot+k]-(minor[i][cot+k+1] - minor[hang+k][j+1]));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}