#include<bits/stdc++.h>
using namespace std;

// Ap dung luy thua Modulo
long long power_modulo(long long A, long long B, long long M) // Tính A^B % M, 
{
    if (B == 0)
        return 1;

    long long half = power_modulo(A, B / 2, M) % M;

    if (B%2==1)
        return (((half * half)%M) * A) % M;
    else
        return (half * half) % M;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long a,n;
        cin >> a >> n;
        cout << power_modulo(a,n,1000000007);
        return 0;
    }
}