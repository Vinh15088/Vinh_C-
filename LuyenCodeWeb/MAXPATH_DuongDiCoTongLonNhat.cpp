#include<bits/stdc++.h>
using namespace std;
const int N = 100 + 10;
int n, m, a[N][N];
int f[N][N];
int rs = INT_MIN;
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin >> a[i][j];

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(j == 0) f[i][j] = a[i][j];
                else {
                    int pre = f[i][j-1];
                    if(i > 0) pre = max(pre, f[i-1][j-1]);
                    if(i < n-1) pre = max(pre, f[i+1][j-1]);
                    f[i][j] = pre + a[i][j];
                }
                if(j == m-1) rs = max(rs, f[i][j]);
            }
        }
        cout << rs;
    }
    return 0;
}