#include<bits/stdc++.h>
bool Check(int n){
    int k = sqrt(n);
    if(k*k == n) return 1;
    return 0;
}
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    bool b[10001];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<=10000; i++){
        b[i] = false;
    }
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(Check(a[i][j])){
                b[a[i][j]]= true;
                count++;
            }
        }
    }
    if(count == 0) cout << "NOT FOUND";
    else{
        for(int i=0; i<=10000; i++){
            if(b[i]) cout << i << " ";
        }
    }
    return 0;


}