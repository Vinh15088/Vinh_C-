#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
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
        map<int, bool> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(check(a[i][j]) && mp[a[i][j]] == 0){
                    cout << a[i][j] << " ";
                    mp[a[i][j]] = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}