#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[100005], b[100005], c[100005];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i] == a[j]) {
                count++;
                c[i]=j+1;
                break;
            }
        }
        if(count == 0) c[i]=0;
    }
    for(int j=0; j<m; j++){
        cout << c[j] << " ";
    }
    return 0;
}