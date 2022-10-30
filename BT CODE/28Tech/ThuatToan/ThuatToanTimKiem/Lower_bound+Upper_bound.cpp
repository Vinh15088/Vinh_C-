#include<bits/stdc++.h>
using namespace std;
/*
ap dung cho mang, vector da duoc sap xep
lower_bound(iter1, iter2, key) => tra ve vi tri cua phan tu dau tien >= key
neu ma tat ca phan tu deu nho hon key thi no se tra ve iter2
*/

/*
upper_bound(iter1, iter2, key) tra ve vi tri dau tien cua phan tu > key
neu tat ca cac phan tu deu <= key thi no se tra ve iter2
*/

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // dung auto tra ve gia tri
    // auto it = lower_bound(a, a+n, x); // tim vi tri dau tien cua phan tu >= x nam trong mang
    // cout << *it << endl;
    // if(it == (a+n)) cout << "Khong co phan tu nao >= " << x << endl;
    auto it = upper_bound(a.begin(), a.end(), x)
    cout << distance(a.begin(), it) << endl;
    if(it == a.end()) cout << "Khong co phan tu nao" << endl;
}