#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        while(n>1){
            sort(a, a+n, cmp);
            a[0] = a[0]-a[1];
            for(int i=1; i<n-1; i++){
                a[i] = a[i+1];
            }
            n--;
        }
        cout << a[0] << endl;
    }
    return 0;
}