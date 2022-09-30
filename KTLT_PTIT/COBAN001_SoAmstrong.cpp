#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n){
    int array[20];
    int i=0;
    long long sum = n;
    while(n>0){
        array[i] = n%10;
        n /= 10;
        i++;
    }
    ll sum1 = 0;
    for(int j=0; j<i; j++){
        sum1 += pow(array[j], i);
    }
    if(sum == sum1) return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)==1) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}