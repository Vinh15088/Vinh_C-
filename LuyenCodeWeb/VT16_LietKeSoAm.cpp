#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count =0;
    while(cin >> n){
        if(n==0){
            break;
        }
        else if (n<0){
            count++;
            cout << n << " ";
        }
    }
    if(count==0){
        cout << "NOT FOUND" << endl;
    }
    return 0;
}