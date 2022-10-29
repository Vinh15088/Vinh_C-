#include<bits/stdc++.h>
using namespace std;
int main(){
    //C1: tim kiem nhi phan tren 1 mang da sap xep
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x:a) cin >> x;
        sort(a, a+n);
        int k; cin >> k;
        while(k--){
            int x; cin >> x;
            if(binary_search(a, a+n, x)){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }

    // Cach 2: dung set
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        int k; cin >> k;
        while(k--){
            int x; cin >> x; 
            if(s.count(x) == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }


        // Cach 3: dung map
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            map<int, bool> mp;
            for(int i=0; i<n; i++){
                int x; cin >> x;
                mp[x] == true;
            }
            int k; cin >> k;
            while(k--){
                int x; cin >> x;
                if(mp.count(x) == 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }



    return 0;
}