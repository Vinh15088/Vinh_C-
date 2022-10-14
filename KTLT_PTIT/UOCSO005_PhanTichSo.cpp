#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll m = n, Uoc[100001], Count[100001], result = 0;
        if(m%2==0){
            result++;
            while(m%2==0){
                m /= 2;
                Uoc[result] = 2;
                Count[result]++;
            }
        }
        for(int i=3; i<=sqrt(m); i+=2){
            if(m%i==0){
                result++;
                int count = 0;
                while(m%i==0) m /= i, count++;
                Uoc[result] = i, Count[result] = count;
            }
        }
        if(m!=1)  Uoc[++result] = m, Count[result] = 1;
        // ++i tính luôn trên giá trị ban đầu.
        // i++ tạo ra bản copy của giá trị ban đầu.
        cout << result << endl;
        for(int i=1; i<=result; i++) cout << Uoc[i] << " " << Count[i] << endl;
        for(int i=1; i<=result; i++) Uoc[i] = 0, Count[i] = 0;
    }
    return 0;
}