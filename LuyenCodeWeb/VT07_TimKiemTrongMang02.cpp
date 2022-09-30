#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[12];
    for(int i=1;i<12;i++){
        cin >> a[i];
    }
    int STT11= a[11], count = 0;
    for(int i=1;i<11;i++){
        if(STT11 == a[i]){
            cout << i << " "; 
            count++;
        }
    }
    if(count == 0) cout << "-1" << endl;
    return 0;
}