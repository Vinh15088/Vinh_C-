#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ChiSo=0, max=a[0];
    for(int i = 1; i < n; i++){
        if(max <= a[i]) {
            max = a[i];
            ChiSo = i;
        }
    }
    cout << ChiSo << endl;
    return 0;
}