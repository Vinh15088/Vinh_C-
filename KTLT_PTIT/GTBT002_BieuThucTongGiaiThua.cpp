#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    float x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        float a=1, b=1, result=0;
        for(int i=1; i<=n; i++){
            a *= x; // a = a * x
            b *= i;
            result += a/b;
        }
        cout << fixed << setprecision(3) << result << endl;
    }
    return 0;
}