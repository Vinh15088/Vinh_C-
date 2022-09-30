#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    double a = sqrt(n);
    if(a - (long long)a ==0) cout << "YES";
    else cout << "NO";
    return 0;
}