#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == x ) count++;
    }
    if(count >= 1) cout << "YES";
    else cout << "NO";
    return 0;
}