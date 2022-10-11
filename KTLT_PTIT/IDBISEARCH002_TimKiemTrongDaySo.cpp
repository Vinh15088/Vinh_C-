#include <bits/stdc++.h>
using namespace std;

int main() {
	// int m, n;
	// cin >> m >> n;
	// vector<int> a(m), b(n);
	// for (int i = 0; i < m; i++) {
	// 	cin >> a[i];
	// }
	// for(int i = 0; i < n; i++) {
	// 	cin >> b[i];
	// 	auto it = find(a.begin(), a.end(), b[i]);
	// 	if(it != a.end())
	// 		cout << it - a.begin() + 1 << ' ';
	// 	else
	// 		cout << "0 ";
	// }

	// map<int, int> mp;
    // int m,n,tmp;
    // cin >> m >> n;
    // for(int i=0; i<m; i++){
    //     cin >> tmp;
    //     if(mp.find(tmp) == mp.end()) mp[tmp] = i;
    // }
    // for(int i=0; i<n; i++){
    //     cin >> tmp;
    //     if(mp.find(tmp) != mp.end()) cout << mp[tmp] + 1 << " ";
    //     else cout << 0 << " ";
    // }
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    while(m--){
        int x;
        cin >> x;
        int idx = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == x){
                idx = i + 1;
                break;
            }
        }
        cout << idx << " ";
    }
    return 0;
}