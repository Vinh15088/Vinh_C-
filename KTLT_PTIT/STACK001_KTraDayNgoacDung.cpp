#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    getline(cin, s);
    if (s == "" || s == " "){
        cout << "YES" << endl;
        return;
    }
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if (st.empty()){
                cout << "NO";
                return;
            }
            char tmp = st.top();
            st.pop();
            if (s[i] == ')' && tmp != '('){
                cout << "NO";
                return;
            }
            if (s[i] == ']' && tmp != '['){
                cout << "NO";
                return;
            }
            if (s[i] == '}' && tmp != '{'){
                cout << "NO";
                return;
            }
        }
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        Check();
        if(t) cout << " " << endl;
    }
    return 0;
}
