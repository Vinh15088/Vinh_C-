#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    for(int i=2;i<=n;i++){
        sum += i;
    }
    cout << sum + 2*n << endl;
    return 0;

}