#include<bits/stdc++.h>
using namespace std;
int main(){
    std:: string s;
    while(std::cin >> s) {
        std:: cout << (s[0] == s[s.size()-1] ? "YES\n" : "NO\n");
    }
    return 0;

}