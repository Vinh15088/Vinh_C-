#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n;
        int a[20];
        a[1]=a[2]=9, a[3]=a[4]=90, a[5]=a[6]=900, a[7]=a[8]=9000;
        a[9]=a[10]=90000, a[11]=a[12]=900000, a[13]=a[14]=9000000;
        a[15]=a[16]=90000000, a[17]=a[18]=900000000;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}