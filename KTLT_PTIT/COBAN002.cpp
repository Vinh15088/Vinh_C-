#include<bits/stdc++.h>
using namespace std;
long long Check(long long n){
    long long k = sqrt(n);
    if(k != sqrt(n)) return 0;
    while(n>0){
        int m = n%10;
        if(m!=0 && m!=1 && m!=4 && m!=9) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n==1) cout << 0 << endl;
        else {
            for(long long i=pow(10, n-1); ; i++){
                if(Check(i)) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}