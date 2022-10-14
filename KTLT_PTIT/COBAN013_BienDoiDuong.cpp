#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, a[10001]; cin >> n;
        int zero = 0, positive = 0, negative = 0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            if(a[i] == 0) zero++;
            if(a[i] > 0) positive++;
            else negative++;
        }
        if(zero != 0) cout << "-1" << endl;
        else cout << min(positive,negative) << endl;
    }
    return 0;
}