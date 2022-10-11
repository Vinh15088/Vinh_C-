#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check(int x, int y, int m){
    int tongSoGoi = m/x;
    int soVoGoi = m/x;
    while(soVoGoi >= y){
        int soGoiDoi = soVoGoi / y;
        int soVoGoiDu = soVoGoi % y;
        tongSoGoi += soGoiDoi;
        soVoGoi = soGoiDoi + soVoGoiDu;
    }
    return tongSoGoi;
}
int main(){
    int t; cin >> t;
    while(t--){
        int x,y,m;
        cin >> x >> y >> m;
        cout << check(x,y,m) << endl;
    }
    return 0;
}