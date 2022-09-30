#include<bits/stdc++.h>
using namespace std;
int main() {
    double a,b;
    char x;
    cin >> a;
    cin.ignore();
    cin >> x;
    cin >> b;
    switch  (x)
    {
        case '+':
            cout << fixed << setprecision(2) << a+b;
            break;
        case '-':
            cout << fixed << setprecision(2) << a-b;
            break;
        case '*':
            cout << fixed << setprecision(2) << a*b;
            break;
        case '/':
            if(b==0) cout << "Math Error";
            else cout << fixed << setprecision(2) << a/b;
            break;
    }
    return 0;
}