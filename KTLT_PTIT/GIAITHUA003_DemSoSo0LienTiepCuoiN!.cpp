#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, sum = 0; cin >> n;
        int k=1;
        while(pow(5,k) <= n){
            sum += n/pow(5,k);
            k++;
        }
        cout << sum << endl;
    }
}