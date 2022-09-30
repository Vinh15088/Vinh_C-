#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n < 2) cout << "NO";
    else {
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0){
                cout << "NO";
                goto pos1;
            }
        }
        cout << "YES";
        pos1:
        cout <<"";
    }
    return 0;
}