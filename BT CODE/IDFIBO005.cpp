#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int n, a[30], s, dp[105][100005], ans[100005], t;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  a[1]=1, a[2]=2;
  f(i,3,25) a[i]=a[i-1]+a[i-2];
  //f(i,1,25) cout<<a[i]<<'\n';
  dp[1][a[1]]=1;
  f(i,1,25) dp[i][0]=1;
  f(i,2,25){
    f(j,1,100000){
      if(j>=a[i]) dp[i][j]=dp[i-1][j-a[i]]+dp[i-1][j];
      else dp[i][j]=dp[i-1][j];
    }
  }
  f(i,1,100000) ans[i]=dp[25][i];
  //f(i,1,n) {f(j,1,s) cout<<dp[i][j]<<" "; cout<<'\n';}
  cin >> t;
  while(t--){
    cin >> n;
    cout<<ans[n]<<'\n';
  }
return 0;
}