#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,x,y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    if(x1>x2) swap(x1,x2);
    if(y1>y2) swap(y1,y2);
    if( x>x1 && x<x2 && y>y1 && y<y2) cout << "YES";
    else cout << "NO";
    return 0;
}