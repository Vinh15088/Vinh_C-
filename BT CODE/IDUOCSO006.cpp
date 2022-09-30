#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll a, b, t, sa, sb;
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> a >> b;
    sa=0, sb=0;
    f(i,2,sqrt(a)){
    if(a%i==0){
      if(i*i!=a){
        sa+=i+a/i;
      }
      else sa+=i;
    }}
    sa++;
    f(i,2,sqrt(b)){
    if(b%i==0){
      if(i*i!=b){
        sb+=i+b/i;
      }
      else sb+=i;
    }}
    sb++;
    if(a==sb && b==sa) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
return 0;
}