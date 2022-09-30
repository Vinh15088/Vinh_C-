#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check(int n){
    int count = 0;
    while(n>0){
        int k = n%10;
        n /= 10;
        if(k!=2 && k!=3 && k!=5 && k!=7) count++;
    }
    if(count==0) return 1;
    return 0;
}
int SNT(int n){
    if(n<2) return 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int count = 0;
        for(int i=1; i<=n; i++){
            if(check(i) && SNT(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}