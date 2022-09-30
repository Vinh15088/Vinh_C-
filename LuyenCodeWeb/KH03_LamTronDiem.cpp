#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        if(n>=38){
            if(n%5>=3){
                n += (5-(n%5));
            }
        }
        cout << n;
        cout << endl;
    }
    return 0;
}