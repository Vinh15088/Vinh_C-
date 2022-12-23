#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n; 
        if(n%2==0){
            while(n%2==0){
                n/=2;
            }
            if(n==1) cout << "2" << endl;
        }
        if(n%2!=0 && n>1){
            for(ll i=3; i*i<=n; i+=2){
                if(n%i==0){
                    while(n%i==0){
                    	n/=i;
                    } 
             	}
                 if(n==1) cout << i << endl;
            }
        }
        if(n>1) cout << n << endl;
    }
    return 0;
}