#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double x, sum =0;
    int temp =1;
    cin >> x >> n;
    for(int i=1;i<=n;i++){
        temp *= i;
        sum += pow(x,i)/temp;
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}