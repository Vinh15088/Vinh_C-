#include<bits/stdc++.h>
using namespace std;

bool SNT(int n) {
    if(n<2) return false;
    for(int i=2; i<= sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    
    int n;
     cin >> n;
     for(int i=1; i<=n ; i++) {
        if(SNT(i) == true) cout << i << " ";
     }
     return 0;
}


#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

using namespace std;
	// Topic variable.
		ll 	n;
	// Auxiliary variable.
		bool	snt[1000100];
	//___________________
void seive(ll k)
{
	int e = sqrt(k);
	int i = 2;
	snt[1] = true;
	while (i <= e)
	{
		while (snt[i] == true) ++i;
		FOR(j, 2, (k / i)) snt[i*j] = true;
		++i;
	}
}	
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		cin >> n;
		seive(n);
		FOR(i, 2, n)
		{
			if (! snt[i]) cout << i << " ";
		}
	return 0;
}