#include<bits/stdc++.h>
using namespace std;
#define N 1000000
int main(){
    double f[N];
    int t, n;
    cin >> t;
    f[0] = 0;
    for(int i=1; i<= N; i++){
        f[i] = sqrt( (double)i + (f[i-1]));
    }
    for(int i=0; i<t; i++){
        cin >> n;
        cout << fixed << setprecision(5) << f[n] << endl;
    }
    return 0;
}