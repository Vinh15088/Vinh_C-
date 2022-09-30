#include<bits/stdc++.h>
using namespace std;
float Solve(int n, float x){
    float result = 1;
    for(int i=1; i<=x; i++) result*=n;
    return result;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        float x;
        cin >> n >> x;
        float a=1, result = 0;
        for(int i=1; i<=n; i++){
            result = sqrt(Solve(x,i)+ result);
        }
        cout << fixed << setprecision(3) << result << endl;
    }
    return 0;
}