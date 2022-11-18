#include<bits/stdc++.h>
using namespace std;

// substr: hảm lấy ra ký tự từ string --> substr(2,2);
// stoi: hàm chuyển từ string sang int
// stoll: chuyển từ string sang long long
// to_string: chuyển một số sang string
// stringstream: tách các từ trong xâu

int main(){
    // int n, cin >> n;
    // cin.ignore();
    // string s;
    // cin >> s;
    // cout << s;
    string s = "java python     php hehe";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        cout << tmp << endl;
    }

    // tách theo dấu chấm
    string s = "java.python.php.lap.trinh";
    stringstream ss(s);
    string tmp;
    while(getline(ss, tmp, '.')){
        cout << tmp << endl;
    }
}