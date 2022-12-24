#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll	L, R;
int	Dem(ll l, ll r){
	int	S = sqrt(l);
		while (pow(S, 2) < l) S++;
	int	E = sqrt(r);
		return (E - S + 1);
}
int main(){		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
    while(t--){
        cin >> L >> R;
		cout << Dem(L, R) << endl;
    }
	return 0;
}