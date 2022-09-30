#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b <= c || b+c <= a || a+c <= b) cout << "NO";
    else {
        double perimeter = a+b+c;
        double p = perimeter/2;
        double area = sqrt( p * (p-a) * (p-b) * (p-c) );
        cout << perimeter << " ";
        cout << fixed << setprecision(2) << area;
    }
    return 0;
}