#include<bits/stdc++.h>
using namespace std;


int main(){
   short t;
   cin >> t;
   string str;
   cin.ignore();
   while(t--){
        getline(cin, str);
        int length = str.length(), count = 0;
        for(int i=0; i<length; i++){
            if(i==0 && str[0] == ' ') count++;
            if(str[i] != ' ' && str[i+1] == ' ') count++;
        }
        cout << count << endl;
   }
   return 0;
}