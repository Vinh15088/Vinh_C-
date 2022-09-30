#include<bits/stdc++.h>
using namespace std;
int main(){
    char a,b;
    cin >> a >> b;
    for(char i=a;i<=b;i++){
        cout << static_cast<char>(i-32) << " ";
        //chuyen tu in thuong sang in hoa
    }
    return 0;
}