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
#define For(i, a, b) for (int i = a; i < b; ++i)
#define Forr(i, a, b) for (int i = a; i >= b; --i)
#define vec vector<ll>
#define sortu(c) sort(c.begin(), c.end())
#define sortd(c) sort(c.rbegin(), c.rend())
#define rev(c) reverse(c.begin(), c.end())
#define pause() system("pause");

using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll res = 0;
    ll len = s.length();
    For(a, 1, len - 2)
    {
        For(b, a + 1, len - 1)
        {
            For(c, b + 1, len)
            {
                string s1 = s.substr(0, a);
                string s2 = s.substr(a, b - a);
                string s3 = s.substr(b, c - b);
                string s4 = s.substr(c, s.size() - c);
                if (s1.size() > 3 || s2.size() > 3 || s3.size() > 3 || s4.size() > 3)
                    continue;
                if ((s1[0] == '0' && s1.size() > 1) || (s2[0] == '0' && s2.size() > 1) || (s3[0] == '0' && s3.size() > 1) || (s4[0] == '0' && s4.size() > 1))
                    continue;
                ll n1 = stoll(s1);
                ll n2 = stoll(s2);
                ll n3 = stoll(s3);
                ll n4 = stoll(s4);
                if (n1 >= 0 && n1 <= 255 && n2 >= 0 && n2 <= 255 && n3 >= 0 && n3 <= 255 && n4 >= 0 && n4 <= 255)
                    res++;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    faster();
    int test = 1;
    cin >> test;
    clean();
    while (test--)
    {
        solve();
    }
    // pause();
    return 0;