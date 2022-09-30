#include<bits/stdc++.h>
#define for(i,n) for(int i=1; i<=n; i++)
#define max_ max_element 
// trỏ đến phần từ có giá trị lớn nhất trong phạm vi first->last
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[10001];
    for(i,n) cin >> a[i];
    for(i,n)
        a[i] += *max_(a+max(i-k,0), a+i);
    cout << *max_(a,a+n+1);
}
