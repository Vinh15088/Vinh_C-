// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// bool check(int n){
//     if(n==1 || n==1) return 0;
//     if(n==2 || n==3) return 1;
//     if(n%2==0 || n%3==0) return 0;
//     for(int i=3; i<=sqrt(n); i+=2){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
// int main(){
//     int t; cin >> t;
//     while(t--){
//         int L,R, count=0;
//         cin >> L >> R;
//         for(int i=L; i<=R; i++){
//             if(check(i)) count++;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
// C1 chưa tối ưu về thời gian, time limited

// C2

#include<bits/stdc++.h>
#define ll long long
#define FOR(i,r,l) for(int i=r; i<=l; i++)
using namespace std;
const int Nmax = pow(10,6);
bool snt[100000001];
int ans[100000001];
void solve(){
    int i=2;
    snt[1]=true;
    while(i<=1000){
        while(snt[i] == true) i++;
        FOR(j,2,Nmax/i) snt[i*j] = true;
        i++;
    }
    ans[0] = 0;
    FOR(i,1,Nmax){
        ans[i] = ans[i-1] + abs((int) snt[i] -1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    int t; cin >> t;
    while(t--){
        int R, L; cin >> R >> L;
        cout << ans[L] - ans[R-1] << endl;
    }
    return 0;
}