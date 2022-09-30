#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t, n;
int main()
{
ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  cin >>t;
  while(t--){
    cin >> n;
    f(i,1,(n-1)/9) cout<<"123456790";
    int k=(n-1)%9;
    f(i,1,k) cout<<char(48+i);
    fn(i,k+1,2) cout<<char(48+i);
    f(i,1,(n-1)/9) cout<<"098765432";
    cout<<1<<'\n';
  }
return 0;
}