#include<bits/stdc++.h>
#define ll long long
#define For(i,r,l) for(int i=r; i<=l; i++)
#define fod(i,r,l) for(int i=r; i>=l; i--)
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        For(i,1,(n-1)/9) cout << "123456790";
        int k = (n-1)%9;
        For(i,1,k) cout << char(48+i);
        fod(i,k+1,2) cout << char(48+i);
        For(i,1,(n-1)/9) cout << "098765432";
        cout << "1" << endl;
    }
    return 0;
}