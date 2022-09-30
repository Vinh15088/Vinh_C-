#include<bits/stdc++.h>
using namespace std;
int tong(int k){
    int tong = 0;
    for(int i=1; i<=k; i++){
        tong += i;
    }
    return tong;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        double k;
        cin >> n >> k;
        float Sum=0;
        for(int i=1; i<=n; i++){
            Sum += pow(k,i) / tong(i);
        }
        cout << fixed << setprecision(3) << Sum << endl;
    }
    return 0;
}