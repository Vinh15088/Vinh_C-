#include<bits/stdc++.h>
using namespace std;

int ktra(int n)
{
    if(n<2) return 0;
    else for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    for(int i=1;i<=n;i++) {
        if(ktra(a[i]) == 1 && a[i] != a[i-1]) cout << a[i] << " ";
    }
    return 0;

}