#include<bits/stdc++.h>
#define PI 3.14159265358979323846
#define a 0.00001
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        float x; cin >> x;
        while(x > 2*PI) x -= 2*PI;
        int k=-1;
        float mauSo=1.0, tuSo=x, result=x;
        for(int i=1; (tuSo/mauSo) > a; i++){
            tuSo *= x*x;
            mauSo *= (2*i) * (2*i+1);
            result += k * (tuSo/mauSo);
            k = -k;
        }
        cout << fixed << setprecision(6) << result << endl;
    }
    return 0;
}