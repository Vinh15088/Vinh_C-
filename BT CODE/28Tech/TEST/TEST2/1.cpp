#include<bits/stdc++.h>
using namespace std;

bool checkSNT(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

bool check(int n){
    int a = n%10;
    n/=10;
    while(n!=0){
        int b = n%10;
        n/=10;
        if(a < b) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(check(i) && checkSNT(i)){
            count++;
            cout << i << " ";
        }
    }
    cout << endl << count;
    return 0;
}