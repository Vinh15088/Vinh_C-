#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, sum=0; cin >> n;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            int j= n/i;
            if(j==i) sum += i;
            else sum += i + j;
        }
    }
    cout << sum;
    return 0;
}