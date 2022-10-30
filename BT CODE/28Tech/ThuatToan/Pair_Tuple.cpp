#include<bits/stdc++.h>
using namespace std;
// Pair dùng để lưu các cặp số đi cùng nhau
// pair<datatype1, datatype2> v
// v.first: datatype1
// v.second: datatype2

//Tuple: dùng để lưu với nhiều kiểu dữ liệu đi cùng nhau
int main(){
    pair<int, int> v = make_pair(100, 200);
    // pair<int, int> v = {100, 200};
    cout << v.first << endl;
    cout << v.second << endl;


    // Tuple
    tuple<int, int , int> t{1,2,3};
    // tuple<string, int, string> t = make_tuple("java", 100, "python");
    cout << get<0>(t) << endl; // truy cập đến 1
    cout << get<1>(t) << endl; // truy cập đên 2
    return 0;
}