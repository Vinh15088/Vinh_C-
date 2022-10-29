#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, n;
    cin >> x >> n;
    long long luythua=1;
    for(int i=0;i<n;i++) {
        luythua *= x;
    }
    cout << luythua << endl;
    return 0;
}