#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*
Sap xep cac phan tu trong mang theo thu tu tang dan ve gia tri tuyet doi
8
1 -1 2 1 5 -2 -5 6
output: 1 -1 1 2 -2 5 -5 6
*/

// cai dat tham so thu 3 cho ham sort: cmp

// bool cmp(int a, int b){
//     // if(a>b) return true;
//     // else return false;
//     // or
//     return a>b;
// }
// bool cmp1(int a, int b){
//     return abs(a) < abs(b);
// }
// int main(){
//     int n; cin >> n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }
//     stable_sort(a, a+n, cmp1);
//     for(int x:a) cout << x << " ";
// }



// sap xep cac tu theo thu tu chieu dai giam dan
// tu nao co thu tu tu dien nho hon thi in truoc
/*
5 
python java php c sql
output: python java php sql c
*/
bool cmp(string a, string b){
    if(a.length() != b.length()) return a.length() > b.length();
    return a < b;
    // return a.length() > b.length();
}
int main(){
    int n; cin >> n;
    string a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    for(string x:a) cout << x << " ";
}