// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n, l; cin >> n >> l;
//         int a[n], b[n];
//         set<int> s;
//         for(int i=0; i<n-1; i++){
//             cin >> a[i];
//             s.insert(a[i]);
//         }
//         for(int i=0; i<n; i++){
//             b[i] = l + i;
//         }
//         for(int i=0; i<n; i++){
//             if(s.find(b[i]) == s.end()){
//                 cout <<  b[i] << endl;
//             }
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, l; cin >> n >> l;
        long long sum = 0;
        for(long long i=0; i<n-1; i++){
            long long a; cin >> a;
            sum += a;
        }
        unsigned long long answer = (l +(n+l-1)) * (n/2);
        answer -= sum;
        cout << answer << endl;
    }
    return 0;
}