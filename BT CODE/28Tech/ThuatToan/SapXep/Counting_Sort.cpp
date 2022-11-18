// Sep xep dem
#include<bits/stdc++.h>
using namespace std;
int a[1000], cnt[10000001];
void Counting_Sort(int a[], int n){
    int m = INT_MIN;
    for(int i=0; i<n; i++){
       cnt[a[i]]++;
        m = max(m, a[i]);
    }
    for(int i=0; i<=m; i++){
        if(cnt[i] != 0){
            for(int j=0; j<cnt[i]; j++){
                cout << i << " ";
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int m = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    Counting_Sort(a,n);
    return 0;
}