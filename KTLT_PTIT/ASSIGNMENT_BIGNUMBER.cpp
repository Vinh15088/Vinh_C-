#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("bignumber.in", ios_base::in);
    int t;
    fileIn >> t;
    while(t--){
        int a, b, c, d;
        fileIn >> a;
        fileIn >> b;
        fileIn >> c;
        fileIn >> d;
        
        fileOut.open("bignumber.out", ios_base::out);
        fileOut << a+b << endl;
        fileOut << c*d << endl;
    }

    fileOut.close();
    fileIn.close();   // dong file

}