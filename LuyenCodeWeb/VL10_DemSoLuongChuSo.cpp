#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string n;
    cin >> n;
    if(n[0] == '-') cout << n.length() -1;
    else cout << n.length();
    return 0;\
}