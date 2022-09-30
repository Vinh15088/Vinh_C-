#include<bits/stdc++.h>
using namespace std;
double Sum(int n){
    double sum = 1;
    for(int i=1; i<=n; i++){
        sum = 1/(1 + sum);
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fixed << setprecision(5) << Sum(n) << endl;
    }
    return 0;

}
