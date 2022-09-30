#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        long long count = 0;
        for(int i=0; i<n.length(); i++){
            if(n[i] >= '0' && n[i] <= '9') count++;
        }
        cout << count << endl;
    }
    return 0;
}