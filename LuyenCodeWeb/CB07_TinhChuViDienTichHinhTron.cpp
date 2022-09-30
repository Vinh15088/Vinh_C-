#include<iostream>
#include<iomanip>
using namespace std;
#define Pi 3.14
int main() {
    float r;
    cin >> r;
    cout << fixed << setprecision(3) << 2*Pi*r << endl << r*r*Pi;
    return 0;
}