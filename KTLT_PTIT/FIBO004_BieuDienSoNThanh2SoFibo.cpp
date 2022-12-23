#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    long long a[10005];
    a[0]=0, a[1]=1;
    for(int i=2; i<10005; i++){
        a[i] = a[i-1] + a[i-2];
    }
    while(t--){
        long long n; cin >> n;
        int check = 1;
        for(int i=0; i<10005; i++){
            if(a[i] <= n/2){
                long long b=n-a[i];
                for(int j=0; j<10005; j++){
                    if(b == a[j]){
                        check = 0; 
                        break;
                    }
                }
                if(check == 0) {
                        cout << a[i] << " " << b << endl;
                        break;
                }
            }
        }
        if(check == 1) cout << "-1" << endl;
    }
    return 0;
}