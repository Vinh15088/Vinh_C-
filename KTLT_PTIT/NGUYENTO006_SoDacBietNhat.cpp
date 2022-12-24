#include<bits/stdc++.h>
using namespace std;
// bool ngto(int n){
//     if(n<1) return 0;
//     for(int i=0; i<=sqrt(n); i++) if(n%i==0) return 0;
//     return 1;
// }
int Special(int n){
    int x = n;
    int max1 = 0;
    for(int i=2; i<=sqrt(n); i++){
        while(x%i == 0){
            x /= i;
            max1 = max(max1,i);
        }
    }
    if(x>1) return x;
    return max1;
}
bool Check(int n){
    if(Special(n) > sqrt(n)) return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=n; i>=1; i--){
            if(Check(i)) {
                cout << i << endl; 
                break;
            }
        }
    }
    return 0;
}