#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll tinh(int n){
  if(n==0) return 1;
  if(n%2) return (2*tinh(n-1))%MOD;
  ll tmp=tinh(n/2);
  return (tmp*tmp)%MOD;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      if(n%2) cout<<-1<<'\n';
      else{
        if(n==2) cout<<1<<'\n';
        else cout<<tinh((n-2)/2)<<'\n';
      }
    }
    return 0;
}