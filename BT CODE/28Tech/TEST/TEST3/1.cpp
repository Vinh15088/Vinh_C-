// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool checkSNT(ll n){
//     if(n<2) return false;
//     if(n==2 || n==3) return true;
//     if(n%2==0 || n%3==0) return false;
//     for(ll i=3; i<=sqrt(n); i+=2){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
//     ll n; cin >> n;
//     int check=0;
//     for(ll i=2; i<=n; i++){
//         ll X3 = pow(i,3);
//         if(checkSNT(i)){
//             if(n%i==0 && n%X3==0){
//                 check = 1;
//                 break;
//             }
//         }
//     }
//     if(check==1) cout << "YES" << endl;
//     else cout << "NO"<< endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    for(long long i=2; i<=sqrt(n); i++){
        if(n%i==0){
            int mu=0;
            while(n%i==0){
                ++mu;
                n/=i;
            }
            if(mu>=3) 
                return true;
        }   
        
    }
    return false;
}
int main(){
    long long n; cin >> n;
    if(check(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}