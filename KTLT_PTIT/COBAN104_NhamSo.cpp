#include<bits/stdc++.h>
using namespace std;

int min(string a){
    for(int i=0; i<a.size(); i++){
        if(a[i] == '5') a[i] = '3';
    }
    int x = stoi(a);
    return x;
}

int max(string a){
    for(int i=0; i<a.size(); i++){
        if(a[i] == '3') a[i] = '5';
    }
    int x = stoi(a);
    return x;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        int x, y; cin >> x >> y;
        string a = to_string(x);
        string b = to_string(y);
        cout << min(a)+min(b) << " " << max(a)+max(b) << endl;
    }
    return 0;
}