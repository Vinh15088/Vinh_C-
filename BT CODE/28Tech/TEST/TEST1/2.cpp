#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        ms.insert(x);
    }    
    int q; cin >> q;
    while(q--){
        int x, y; cin >> x >> y;
        if(x==1){
            ms.insert(y);
        }
        else if(x==2){
            auto it = ms.find(y);
            if(it != ms.end()){
                ms.erase(it);
            }
        }
        else {
            if(ms.find(y) != ms.end()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}