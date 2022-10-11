#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i=0; i<(int) s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else {
                if(st.empty()){
                    cout << "NO";
                    return 0;
                }
                char c = st.top();
                st.pop();
                if((s[i] == ')' && c != '(' ) || (s[i] == '}' && c != '{' ) || (s[i] == ']' && c != '[' )){
                    cout << "NO";
                    return 0;
                }
            }
        }
        if( !st.empty()) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}