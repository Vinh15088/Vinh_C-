#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int n, sum=0;
        cin >> n;
        for(int i =1; i<=sqrt(n); i++){
            if(n%i==0){
                int j = n/i;
                if(i==j) sum += i;
                else sum += i + j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}