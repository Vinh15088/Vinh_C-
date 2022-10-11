#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]=='6' || s[i]=='8') return 1;
    }
    return 0;
}
