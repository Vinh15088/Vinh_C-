#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[500][500];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    cout << a[i][j] << " ";
                }
                else cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}