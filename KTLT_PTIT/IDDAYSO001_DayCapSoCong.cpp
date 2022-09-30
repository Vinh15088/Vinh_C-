#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; ll a[1000005];
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        ll b = a[2] - a[1];
        int check = 0;
        for(int i=2; i<=(n-1); i++){
            if((a[i+1] - a[i]) != b){
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}

// // int main(){
//     int n; cin >> n;
//     ll a[n];
//     for(int i=1; i<=n; i++){
//         cin >> a[i];
//     }
//     ll b = a[2] - a[1];
//     int check = 0;
//     for(int i=2; i<=n-1; i++){
//         if((a[i+1] - a[i]) != b){
//             check = 1;
//             break;
//         }
//     }
//     if(check == 0) cout << "YES";
//     else cout << "NO";
//     cout << endl;
// }