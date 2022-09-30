#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        float a=1, result=0;
        for(int i=1; i<=n; i++){
            a *= i;
            float dao = i+1;
            dao = 1/dao;
            result = pow(result+a,dao);
        }
        cout << fixed << setprecision(3) << result << endl;
    }
    return 0;
}