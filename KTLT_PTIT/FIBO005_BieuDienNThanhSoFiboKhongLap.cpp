#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clean() cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define pb push_back
#define fi first
#define se second
#define Mod 1000000007
#define ld long double
#define ll long long
#define lli unsigned long long int
#define For(i, a, b) for (ll i = a; i < b; ++i)
#define Forr(i, a, b) for (ll i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;
ll f[93];
void pre()
{
    f[0] = 0;
    f[1] = 1;
    For(i, 2, 36)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

ll back(ll n, ll sum, ll idx)
{
    if (sum == n)
        return 1;
    if (sum > n)
        return 0;
    ll res = 0;
    For(i, idx, 36)
    {
        res += back(n, sum + f[i], i);
    }
    return res;
}
void solve()
{
    ll n;
    cin >> n;
    cout << back(n, 0, 0) << endl;
}

int main()
{
    faster();
    pre();
    int test = 1;
    cin >> test;
    // clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;
}