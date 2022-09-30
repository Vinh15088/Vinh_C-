#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "INF";
        return 0;
        }
    for(int i= (n>0) ? n : abs(n); i>0; i--){
        if(n%i == 0){
            cout << i << " ";
            }
    }
    return 0;
}