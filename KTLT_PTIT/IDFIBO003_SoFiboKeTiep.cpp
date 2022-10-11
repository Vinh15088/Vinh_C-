#include<bits/stdc++.h>
#define ll long long
using namespace std;
int Fibo(int n){
    if(n==1 || n==2) return 1;
    return Fibo(n-1) + Fibo(n-2);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=1; i<=105; i++){
            if(n==Fibo(i) || Fibo(i) > n ){
                cout << Fibo(i)+1 << endl;
                break;
            }
            
        }
    }
    return 0;
}