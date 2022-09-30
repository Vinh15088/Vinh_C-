#include<bits/stdc++.h>
using namespace std;
int max(int a[], int n){
    int max=a[0];
    for(int i=1; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << max(a,n);
    return 0;
}