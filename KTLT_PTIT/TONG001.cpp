#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long R,L;
        cin >> R >> L;
        if(R%2==0) R++;
        if(L%2==0) L--;
        long long sum = 0, x;
        x = (L-R)/2+1;
        sum = x * ((L+R)/2);
        cout << sum << endl;
    }
    return 0;
}
    