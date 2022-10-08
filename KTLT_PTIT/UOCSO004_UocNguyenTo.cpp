#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll x = n, uoc = 2;
        bool check = true;
        while(x != 1){
            int count = 0;
            while(x%uoc == 0){
                count++;
                x /= uoc;
            }
            if(count > 1){
                check = false;
                break;
            }
            uoc++;
            if(uoc>sqrt(x)) break;
        }
        if(check == false) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}