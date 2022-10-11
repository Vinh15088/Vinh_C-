#include<bits/stdc++.h>
using namespace std;
bool ktra(int n, int a[1005]){
    for(int i=0; i<n; i++){
        if(a[i] == 0) return 1;
    }
    return 0;
}
void check(int n, int a[1005]){
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] < 0) count ++;
    }
   if(ktra(n,a)) cout << "-1" << endl;
   else {
        if(count == 0) cout << "0" << endl;
        else cout << "1" << endl;
   }

}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[1005];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        check(n,a);
    }
    return 0;
}