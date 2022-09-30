#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum=0;
    cin >> n;
    if(n<2) {
        cout << "Nhap Lai";
    }
    else{ 
        for(double i=2;i<=n;i++){
            sum += 1/i;
        }
        cout << fixed << setprecision(4) << sum ;
    }
    return 0;

}