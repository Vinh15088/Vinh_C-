#include<bits/stdc++.h>
#define ll long long
const int MOD=1e9 + 7;
using namespace std;

struct Maxtrix{
    long long c[2][2];
    Maxtrix(){
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};

Maxtrix operator * (Maxtrix a, Maxtrix b){
    Maxtrix Resutl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            Resutl.c[i][j] = 0;
            for(int k=0; k<=1; k++){
                Resutl.c[i][j] = (Resutl.c[i][j] + a.c[i][k]*b.c[k][j]) % MOD;
            }
        }
    }
    return Resutl;
}

Maxtrix solve(Maxtrix a, ll n){
    if(n==1) return a;
    if(n%2 != 0) return solve(a, n-1) * a;
    Maxtrix tmp = solve(a, n/2);
    return tmp*tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        Maxtrix a;
        a = solve(a, n);
        cout << a.c[0][1] << endl;
    }
    return 0;
}