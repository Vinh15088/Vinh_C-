#include<bits/stdc++.h>
#include<iostream>
#include<cmath>

using namespace std;
int UCLN(int a, int b){
    int temp;
    while(b!=0){
        temp = a%b;
        a = b;
        b = temp;
    }
    return a;
} 
int BCNN(int a, int b){
    return (a*b) / UCLN(a, b);
}
int main(){
    int a,b;
    cin >> a >> b;
    if(a<0 || b<0) {
        a = abs(a);
        b = abs(b);
    }
    cout << BCNN(a,b) << endl;
    return 0;
}

/* Cach 2
int a,b;
cin >> a >> b;
int c = abs(a*b);
for(int i=0;i<=c;i++) {
    if(i%a==0 && i%b==0) {
        cout << i;
        return 0;
    }
}
return 0;
*/