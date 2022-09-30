#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int r,l, sum = 0;
        cin >> r >> l;
        if(l==r) cout << "0" << endl;
        else{
            for(int i=r; i<=l; i++){
                sum += i;
            }
            cout << sum << endl;
        }
    }
    return 0;
}