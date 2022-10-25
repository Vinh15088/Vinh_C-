#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[13]={0,1,0,0,2,10,4,40,92,352,724,2680,14200};
        cout << a[n] << endl;
    }
    return 0;
}