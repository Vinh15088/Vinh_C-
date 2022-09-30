#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int max1 = a[n-1] * a[n-2] * a[n-3];
    for(int i=0; i<n-1;i++){
        for(int j=1; j<n-2;j++){
            if(a[n-1] * a[i] * a[j] > max1) max1 = a[n-1] * a[i] * a[j];
        }
    }
    cout << max1 << endl;
    return 0;
}