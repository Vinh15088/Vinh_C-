#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;
    cin >> n >> a >> b;
    if(n%a==0 && n%b==0) cout << "Co, tat ca!";
    if(n%a==0 && n%b!=0) cout << "Chi chia het cho " << a << ",";
    if(n%a!=0 && n%b==0) cout << "Chi chia het cho " << b << ".";
    if(n%a!=0 && n%b!=0) cout << "Khong chia het cho so nao ca.";
    return 0;
}