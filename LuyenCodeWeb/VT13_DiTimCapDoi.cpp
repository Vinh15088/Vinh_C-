#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = a[0]+a[1];
    int vt = 0;
    int vt1 = 1;
    for(int i=1;i<n-1;i++){
        if(a[i] + a[i+1] >= max)
        {
            vt = i;
            vt1 = i+1;
            max = a[i] + a[i+1];
        }
    }
    if(a[0] + a[n-1] >= max){
        vt = n-1;
        vt1 = 0;
    }
    cout << a[vt] << " " << a[vt1] << endl;
    return 0;
}