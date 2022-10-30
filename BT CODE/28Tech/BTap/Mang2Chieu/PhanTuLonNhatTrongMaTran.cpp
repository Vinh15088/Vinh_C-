#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[505][505];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int max_val = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                max_val = max(max_val, a[i][j]);
            }
        }
        cout << max_val << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(max_val == a[i][j]){
                    cout << "Vi tri xuat hien: " << "A[" << i+1 << "][" << j+1 << "]" << endl;
                }
            }
        }
    }
    return 0;
}