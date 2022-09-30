#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int max1 = a[n-2] * a[n-1];
    if(max1 <= a[0] * a[1]) max1 = a[0] * a[1];
    cout << max1 << endl;
    return 0;
}