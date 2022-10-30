#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    // check do dai password
    if(s.length() <= 6) return 0;
    // check digits from 0 to 9
    if(true){
        int count = 0;
        for(int i=0; i<=9; i++){
            char c = i+48;
            string s1(1,c); // Khai báo string với 1 lần lặp lại sau mỗi vòng for
            if(s.find(s1) != std::string::npos) count = 1; // std::string::npos : Nó có nghĩa là không tìm thấy
        }
        if(count == 0) return 0;
    }
    // check special characters
    if (!((s.find("@") != std::string::npos) || (s.find("%") != std::string::npos) || (s.find("&") != std::string::npos))) 
        return 0;
    // check capital letters
    if(true){
        int count = 0;
        for(int i=65; i<=90; i++){
            char c = (char) i;
            string s1(1,c);
            if(s.find(s1) != std::string::npos) count = 1;
        }
        if(count == 0) return 0;
    }
    // check small letters
    if(true){
        int count = 0;
        for(int i=97; i<=122; i++){
            char c = (char) i;
            string s1(1,c);
            if(s.find(s1) != std::string::npos) count = 1;
        }
        if(count == 0) return 0;
    }
    return 1;

}
int main(){
    cout << "Your password: ";
    string s; cin >> s;
    if(check(s)) cout << "Valid Password";
    else cout << "Invalid Password";
    return 0;
}