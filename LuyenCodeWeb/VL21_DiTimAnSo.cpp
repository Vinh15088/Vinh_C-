#include<bits/stdc++.h>
using namespace std;
int main(){
    long x, n, s=0;
    cin >> n;
    for(long i=0;i<n;i++){
        s += i;
        if(s > n) {
            x = i -1;
            break;
        }
    }
    cout << x << endl;
    return 0;

}