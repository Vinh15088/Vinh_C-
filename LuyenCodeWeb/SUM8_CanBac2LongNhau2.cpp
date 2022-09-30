#include<bits/stdc++.h>
using namespace std;

double Sum(int n) {
    double ans = sqrt(n);
    for(int i= n-1; i>=1; i--) ans = sqrt(i + ans);
    return ans;
}

int main(){
    int t;
    cin >> t;
    int n=0;
    while(t--){
        cin >> n;
        cout << fixed << setprecision(5) << Sum(n) << endl;
    }
    return 0;
}