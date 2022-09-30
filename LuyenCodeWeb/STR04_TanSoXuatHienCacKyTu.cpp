#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, n, temp;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        if(s[i] >= '0' && s[i] <= '9') n += s[i];
        if(s[i] >= 'a' && s[i] <= 'z') n += s[i];
    }
    temp = n;
    sort(n.begin(), n.end()); // sap xep theo thu tu tang dan

    for(int i=0; i<n.length()-1; i++){
        for(int j=i+1; j<n.length(); j++){
            if(n[i] == n[j]){
                n.erase(j,1); // ham xoa + n.erase(n,m): xoa m ky tự từ vị trí thứ n
                j--;
            }
        }
    }

    for(int i=0; i<n.length(); i++){
        int count = 0;
        for(int j=0; j<temp.length(); j++){
            if(n[i] == temp[j]) count++;
        }
        cout << n[i] << " " << count << endl;
    }
    return 0;
}