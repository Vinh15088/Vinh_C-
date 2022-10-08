#include<bits/stdc++.h>
#define ll long long
#define for(i,r,l) for(int i=r; i<=l; i++)
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        ll result = 0, x = sqrt(a), y;
        if(x*x == a){
            if(b%x != 0) result += x;
            x--;
        }
        for(i,1,x){
            if(a%i == 0){
                if(b%i != 0) result += i;
                y = a/i;
                if(b%y != 0) result += y;
            }
        }
        cout << result << endl;
    }
    return 0;
}