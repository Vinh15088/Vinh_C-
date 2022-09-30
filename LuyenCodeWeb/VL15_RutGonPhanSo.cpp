#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b==0){
        cout << "INVALID";
        return 0;
    }
    if(a%b==0){
        cout << int (a/b);
        return 0;
    }
    int ucln;
    ucln = abs(__gcd(a,b)); //Tranh truong hop ucln ra so am
    if(b<0){
        a /= -1 *ucln;
        b /= -1 *ucln;
        cout << int(a) << " " << int(b);
    }
    else {
        a /= ucln;
        b /= ucln;
        cout << int(a) << " " << int(b);
    }
    return 0;
}
// __gcd ->> tim ucln