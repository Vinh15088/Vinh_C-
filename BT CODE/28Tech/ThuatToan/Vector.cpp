#include<bits/stdc++.h>
using namespace std;
// vector<kieu du lieu> ten_vector
// hàm đẩy giá trị vào vector: push_back()
// kích thước của vector: size()
// truy cập vào vector thông qua chỉ số...
// duyệt các phần tử trong vector: for(...)
// khai báo
    // vector<int> v
    // vector<int> v(n)
    // vector<int> v(n, value)
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    v.push_back(40);
    cout << v.size() << endl;
    cout << "Phần tử đầu tiên trong vector là " << v[0] << endl;
    cout << "Phần tử cuối cùng trong vector là " << v[v.size() - 1] << endl;
    cout << "Phần tử cuối cùng trong vector là " << v.back() << endl;

    // duyệt vector qua index:
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    // duyệt qua each:
    for(int x:v){
        cout << x << endl;
    }
    // duyệt bằng interator--> con trỏ đến phầnn tử
    for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
        cout << *it << endl;
    }
    // dùng auto
    for(auto it=v.begin(); it!=v.begin(); ++it){
        cout << *it << endl;
    }


    // Khai báo
    int n; cin >> n;
    vector<int>  v; // khai báo vector đã có sẵn n phần tử
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    // khai báo 2
    int n; cin >> n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }
    // có thể nhập thêm phần tử cho vector đã khai báo sẵn 
    v.push_back(20);
    return 0;
}