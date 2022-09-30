#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 0;
    float sum = 0;
    for(int i=0; i<n; i++) {
        if(a[i] %2 != 0) 
        {
            count++;
            sum += a[i];
        }
    }
    cout << fixed << setprecision(4) << (sum/count) << endl;
    return 0;
}