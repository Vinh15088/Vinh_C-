#include<bits/stdc++.h>
using namespace std;

int C(int k, int n) {
    if(k==0 || k==n) return 1;
    if(k==1) return n;
    return (C(k,n-1) + C(k-1,n-1));
}
int main(){
    int k,n;
    cin >> n >> k;
    cout << C(k,n) << endl;
    return 0;

}