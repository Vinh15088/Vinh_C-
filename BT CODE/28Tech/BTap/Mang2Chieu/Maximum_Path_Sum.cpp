#include<bits/stdc++.h>
using namespace std;

void check(int a[105][105], int n, int m){
    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(j==0) a[i][j] += max(a[i-1][j], a[i-1][j+1]);
            else if(j==m-1) a[i][j] += max(a[i-1][j-1], a[i-1][j]);
            else a[i][j] += max(a[i-1][j-1], max(a[i-1][j], a[i-1][j+1]));
        }
    }
    cout << *max_element(a[n-1], a[n-1] + m) << endl;
    // int res = INT_MIN;
    // for(int i=0; i<m; i++){
    //     res = max(res, a[n-1][i]);
    // }   
    // cout << res << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n;
        int a[105][105];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        check(a,n,n);
    }
    return 0;
}

