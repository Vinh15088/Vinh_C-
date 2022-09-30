/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count = 0;
    sort(a,a+n);
    for(int i=0; i<n; i++){
        if(a[i-1] != a[i] && a[i] != a[i+1]) count++;
    }
    cout << n-count << endl;
    return 0;
}
*/


//Cach 2:
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, count =0;
    cin >> n;
    int* a;
    int* z;
    a = new int[1000000];
    z = new int[1000000];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
        z[i] = 0;
    }
    for ( int i = 0; i < n; i++){
        z[a[i]] ++;
    }
    for ( int i = 0; i < n; i++){
        if ( z[a[i]] > 1 ){
            count += z[a[i]];
            z[a[i]] = 0;
        }
    }
    cout << count;
    delete[]a;
    delete[]z;
    return 0;
}