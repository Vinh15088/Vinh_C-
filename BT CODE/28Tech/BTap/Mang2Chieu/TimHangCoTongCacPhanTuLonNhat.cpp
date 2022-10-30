#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll ans = -1e18;
        vector<int> row;
        for(int i=0; i<n; i++){
            ll sum = 0;
            for(int j=0; j<m; j++){
                sum += a[i][j];
            }
            if(sum > ans){
                ans = sum;
                row.clear();
                row.push_back(i);
            }
            else if(sum == ans){
                row.push_back(i);
            }
        }
        cout << ans << endl;
        for(int x:row){
            cout << x+1 << " ";
        }
        cout << endl;
    }
    return 0;
}