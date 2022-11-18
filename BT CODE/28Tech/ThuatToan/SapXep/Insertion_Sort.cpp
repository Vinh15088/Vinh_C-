// Sep xep chen
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        // lay ra phan tu o i
        int x = a[i], pos = i-1;
        while(pos >= 0 && x > a[pos]){
            a[pos+1] = a[pos];
            --pos;
        }
        a[pos+1] = x;
    }
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    InsertionSort(a,n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}