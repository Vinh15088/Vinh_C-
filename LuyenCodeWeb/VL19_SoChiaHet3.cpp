#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int dem=0;
    for(int i=b-1;i>a;i--){
        if(i%3==0) 
        {
            cout << i << " ";
            dem++;
        }
    }
    if(dem == 0) {
        cout << "NOT FOUND";
    }
}
