// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         int a[n];
//         for(int i=0; i<n; i++){
//             cin >> a[i];
//         }
//         vector v(n,1); // tao vector co n phan tu 1
//         for(int i=0; i<n; i++){
//             for(int j=0; j<i; j++){
//                 if(a[i] > a[j]){
//                     v[i] = max(v[i], v[j] + 1);
//                 }
//             }
//         }
//         cout << *max_element(v.begin(), v.end()); // tim phan tu lon nhat trong vextor v
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            b[i] = 1;
            for(int j=0; j<i; j++){
                if(a[i] > a[j]){
                    b[i] = max(b[j] + 1, b[i]);
                }
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, b[i]);
        }
        cout << ans << endl;
    }
    return 0;
}