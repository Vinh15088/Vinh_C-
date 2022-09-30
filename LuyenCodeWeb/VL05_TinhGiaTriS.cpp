#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    for(int i=1; i <= (3*n+1); i++){
        if(i%2==0) sum -= i;
        else sum += i;
    }
    cout << sum;
    return 0;
}