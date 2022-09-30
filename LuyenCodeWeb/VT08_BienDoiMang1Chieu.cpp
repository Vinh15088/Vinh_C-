#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(i%2 != 0) {
            a[i] += abs(a[i-1] - a[i+1]);
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}