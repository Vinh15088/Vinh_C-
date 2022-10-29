#include<bits/stdc++.h>
using namespace std;
int main(){
    //c1: set
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> s;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }

    // c2: dung map
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, bool> mp;
        for(int i=0; i<n; i++){
            int x; cin >> x; 
            mp.insert(x) = true;
        }
        cout << mp.size() << endl;
    }


    // c3: dung mang a[]
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x: a) cin >> x;
        sort(a, a+n);
        int ans = 1;
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]) ++ans;
        }
        cout << ans << endl;
    }
    
    return 0;
}