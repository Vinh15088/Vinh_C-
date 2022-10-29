#include<bits/stdc++.h>
using namespace std;
#include <set>
// độ phức tạp: O(logn)
// insert
// tìm kiếm hàm trong set: count; find
// xóa phần tử: erase
// multiset
// unordered_set
int main(){
    // set<int> s;
    // // s.insert(100);
    // // s.insert(200);
    // // s.insert(300);
    // // s.insert(400);
    // // cout << s.size() << " "; // in ra kich thuoc cua set

    // for(int i=0; i<10; i++){
    //     s.insert(i);
    // }
    // cout << s.size() << endl;
    // if(s.find(5) != s.end()   /* hoắc là s.count(5) != 0 */) 
    //     cout << "Found" << endl;
    // else 
    //     cout << "Not Found" << endl;


    // s.erase(5);
    // cout << s.size() << endl;

    // duyệt các phần tử trong mảng
    // for(int x:s){
    //     cout << x << " ";
    // }
    // // duyệt theo auto
    // for(auto x:s){
    //     cout << x << " ";
    // }
    //duyệt set theo iterator
    // for(set<int>::iterator it=s.begin(); it != s.end(); ++it){
    //     cout << *it << " ";
    // }
        
    // cout << endl;
    // // truy cập đến phần tử nhỏ nhất trong set
    // cout << *s.begin() << endl;

    // // truy cập đến phần tử lớn nhất trong set
    // cout << *s.rbegin() << endl;

// In ra các phân tử khác nhau trong mảng
    // 5
    // 1 2 1 3 1 
    // int n; cin >> n;
    // set<int> s;
    // for(int i=0; i<n; i++){
    //     int x; cin >> x;
    //     s.insert(x);
    // }
    // cout << s.size() << endl;

// In ra số từ khác nhau được nhập vào 
    // int n; cin >> n;
    // set<string> s;
    // cin.ignore();
    // for(int i=0; i<n; i++){
    //     string str;
    //     getline(cin, str);
    //     s.insert(str);
    // }
    // cout << s.size() << endl;
    // for(string x:s){
    //     cout << x << endl;
    // }i

    // multiset
    // multiset<int> ms;
    // ms.insert(100);
    // ms.insert(200);
    // ms.insert(100);
    // ms.insert(200);
    // ms.erase(100); // xóa hết các phần tử 100 trong set
    // cout << ms.size() << endl;
    // for(int x:ms){
    //     cout << x << " ";
    // }
    // cout << ms.count(100) << endl;


    /*
    cho mảng có n phần tử và số nguyên k, đối với dãy con liên tiếp có chiều k
    in ra phần tử lớn nhất trong dãy con đó
    vd: 10 3
    1 2 3 1 4 5 1 8 9 10
    output
    3 4 5 5 8 9 10 --> 
    */ 
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x:a) cin >> x;
    multiset<int> ms;
    for(int i=0; i<k; i++){
        ms.insert(a[i]);
    }
    for(int i=k; i<n; i++){
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl;
    return 0;
}


// unordered_set
int main(){
    unordered_set<int> s;
    for(int i=0; i<10; i++){
        s.insert(i);
    }
    for(int x:s){
        cout << x << endl;
    }
    return 0;
}