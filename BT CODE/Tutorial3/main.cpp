#include<bits/stdc++.h>
#include "stats.h"
#include "stats.cpp"
#include "big.in"

using namespace std;
main(){
    double a, b, c; cin >> a >> b >> c;
    cout << mean(a,b) << endl;
    cout << mean(a,b,c) << endl;
    cout << definition(a,b) << endl;
    cout << definition(a,b,c) << endl;
    return 0;
}