#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int count = 1;
        if(k==1){
            for(int i=1; i<n; i++){
                if(a[0] == a[i]) count++;
            }
        } 
        else {
            for(int i=k; i<n; i++){
                if(a[k-1] == a[i]) count++;
            } 

        }
        cout << count << endl;
    }
}