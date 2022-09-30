#include<bits/stdc++.h>
using namespace std;
// ham ktra vi tri cua dau '?'
bool Ktra(char n){
    if(n == '?') return true;
    return false;
}

void Check(){
    string s;
    getline(cin, s);
    if(Ktra(s[8])){
        if(Ktra(s[9]) || ( s[9] >= '0' && s[9] <= '3')) s[8] = '2';
        else s[8] = '1';
    }
    if(Ktra(s[9])){
        if(s[8] == '2') s[9] ='3';
        else s[9] = '9';
    }
    if(Ktra(s[11])) s[11] = '5';
    if(Ktra(s[12])) s[12] = '9';
    cout << s.substr(7,13) << endl; // ham substr in ra tu vi tri da lua chon
}

int main(){
    int t; 
    cin >> t;
    cin.ignore(); // thêm vào để xoá bộ nhớ đệm, tránh bị trôi lệnh
    while(t--){
        Check();
    }
    return 0;
    
}