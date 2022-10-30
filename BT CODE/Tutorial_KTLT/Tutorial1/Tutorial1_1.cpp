#include<bits/stdc++.h>
using namespace std;

// F = 9/5 C +32
// C = 5/9 (F-32)

//TH1: Tu C sang F
int main() {
    int c;
    cin>>c;
    double f = (float) c * 9/5 +32;
    cout << round(f * 100) / 100 << endl;
    return 0;
}
// TH2: Tu F sang C
/* 
int main() {
    int f;
    cin >> f;
    double c = (float) 5/9 * (f-32);
    cout << fixed << setprecision(2) << c << endl;
    return 0; 
}
*/