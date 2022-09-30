#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll n, m, t;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> n >> m;
    ll ans=0, x=sqrt(n), y;
    if(x*x==n){
        if(m%x!=0) ans+=x;
        x--;
    }
    f(i,1,x){
      if(n%i==0){
        if(m%i!=0) ans+=i;
        y=n/i;
        if(m%y!=0) ans+=y;
      }
    }
    cout<<ans<<'\n';
  }
return 0;
}