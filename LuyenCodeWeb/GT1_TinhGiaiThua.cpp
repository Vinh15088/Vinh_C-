#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,giaithua=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        giaithua *= i;
    }
    cout << giaithua;
    return 0;
}