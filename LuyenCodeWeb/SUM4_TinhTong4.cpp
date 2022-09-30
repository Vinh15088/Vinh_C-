#include<bits/stdc++.h>
using namespace std;
// 1+ 1/(1+2) + 1/(1+2+3) + 1/(1+2+3+4) + .... + 1/(1+2+3...n) = 2*(1-1/(1-n)) 

double sum(double n){
    double res = 2* (1-(1/(n+1)));
    return res;
}
int main(){
    double n, arr[100000];
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        cout << fixed << setprecision(8) << sum(arr[i]) << endl;
    }
    return 0;
}