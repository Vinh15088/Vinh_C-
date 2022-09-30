#include<bits/stdc++.h>
using namespace std;

double Sum(int n, float x) {
    double ans = sqrt(x);
    for(int i= 2; i<=n; i++) ans = sqrt(pow(x,i) + ans);
    return ans;
}

int main(){
    int t;
    cin >> t;
    int n;
    float x;
    while(t--){
        cin >> n;
        cin >> x;
        cout << fixed << setprecision(3) << Sum(n, x) << endl;
    }
    return 0;
}