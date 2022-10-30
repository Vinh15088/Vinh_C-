#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// sort
// stable_sort: sự ổn định của thuật toán sắp xếp
    // bubble
    // insertion sort
    // merge sort
// sort(a, a+n) => sort(a+x, a+y) --> a[x; y-1]
// sort(a.begin(), a.end()) --> voi vector

int main(){
    int n; cin >> n;
    int a[1005];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    // sap xep tang dan
    sort(a, a+n);
    // sap xep giam dan
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }


    // doi voi xau ki tu
    int n; cin >> n;
    string a[1005];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n); // sap xep theo thu tu tang dan cua tu dien
    for(string x:a) cout << x << " ";
    sort(a, a+n, greater<string>()) // sap xep theo thu tu giam dan cua tu dien
    for(string x:a) cout << x << " ";


    // xau ki tu co dau cach
    string s;
    getline(cin, s);
    sort(s.begin(), s.end()); 
    cout << s << endl;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;


    // doi voi pair
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n); // sap xep theo cac first
    for(auto it:a) cout << it.first << " " << it.second << endl;


    
}