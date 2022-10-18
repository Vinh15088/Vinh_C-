#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000001], n, k, ok;
void KhoiTao(){
    for(int i=1; i<=k; i++) a[i] = i;
}

void Sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i) i--;
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
    }
}
void Count(){
    int count = 0;
    ok = 1;
    KhoiTao();
    while(ok){
        count++;
        Sinh();
    }
    cout << count << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        int count = 0;
        Count();
        ok = 1;
        KhoiTao();
        while(ok){
            cout << "[";
            for(int i=1; i<=k; i++){
                cout << a[i];
                if(i!=k) cout << " ";
            }
            cout << "]";
            cout << endl;
            Sinh();
        }
    }
}