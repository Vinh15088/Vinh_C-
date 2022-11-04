#include<bits/stdc++.h>
using namespace std;

int month(int y, int m){
    return y*12 + m;
}
/* Rata Die day one is 0001-01-01 (Lấy mốc là ngày 1 tháng 1 năm 1)*/
int day(int y, int m, int d) { 
    if (m < 3)
    y--, m += 12;
    return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}
 
int main(){
    int t; cin >> t;
    while(t--){
        int y, m, d; cin >> y >> m >> d;
        int y1, m1, d1; cin >> y1 >> m1 >> d1;
        cout << "Age in years: " << y1 - y << endl;
        cout << "Age in months: " << month(y1,m1) - month(y,m) << endl;
        cout << "Age in days: " << day(y1,m1,d1) - day(y,m,d) << endl;
        cout << endl;
    }
    return 0;
}