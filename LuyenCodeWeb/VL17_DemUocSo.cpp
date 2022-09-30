#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int dem=0;
    cin >> a;
    a = abs(a);
    for(int i=1;i<=a;i++) {
        if(a%i == 0) dem++;
    }
    cout << dem;
    return 0;
}