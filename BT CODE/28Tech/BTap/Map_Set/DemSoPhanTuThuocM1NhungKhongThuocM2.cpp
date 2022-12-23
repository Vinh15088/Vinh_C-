#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        //Cach 1: dung set
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int &x:a) cin >> x;
        set<int> s;
        for(int i=0; i<m; i++){
            int x; cin >> x;
            s.insert(x);
        }
        bool ok = false;
        for(int x:a){
            if(s.find(x) == s.end()){ // tim cac phan tu trong a khong thuoc set 
                cout << x << " ";
                ok = true;
            }
        }
        if(!ok) cout << "NOT FOUND" << endl;
        else cout << endl;



        // Cach 2: dung map
        // int n, m; cin >> n >> m;
        // int a[n], b[m];
        // for(int &x:a) cin >> x;
        // map<int, bool> mp
        // for(int i=0; i<m; i++){
        //     int x; cin >> x;
        //     mp[x] = true;
        // }
        // bool ok = false;
        // for(int &x:a){
        //     if(mp.count(x) == mp.end()){
        //         cout << x << " ";
        //         ok = true;
        //     }
        // }
        // if(!ok) cout << "NOT FOUND" << endl;
        // else cout << endl;
    }
    return 0;
}