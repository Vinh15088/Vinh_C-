#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    k = k-1;
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(a[k][i] > a[k][j]){
                int temp = a[k][i];
                a[k][i] = a[k][j];
                a[k][j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}