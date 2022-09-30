#include <bits/stdc++.h>

#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define clear() cin.ignore(numeric_limits<streamsize>::max(), '\n');
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

string mul(string s1, string s2)
{
    string res = "";
    int n = s1.size();
    int m = s2.size();
    res.assign(m + n, '0');
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int mul = (s1[i] - '0') * (s2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + (res[p2] - '0');
            res[p2] = sum % 10 + '0';
            res[p1] += sum / 10;
        }
    }
    while (res[0] == '0' && res.length() > 1)
    {
        res.erase(0, 1);
    }
    return res;
}

string add(string s1, string s2)
{
    int carry = 0;
    string res = "";
    for (int i = s1.length() - 1, j = s2.length() - 1; i >= 0 || j >= 0; i--, j--)
    {
        int a = (i >= 0) ? s1[i] - '0' : 0;
        int b = (j >= 0) ? s2[j] - '0' : 0;
        int sum = a + b + carry;
        if (sum >= 10)
        {
            sum = sum % 10;
            carry = 1;
        }
        else
            carry = 0;
        res = to_string(sum) + res;
    }
    if (carry == 1)
        res = "1" + res;
    // c.num.pop_back();
    return res;
}

void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    while (ss >> s)
    {
        v.pb(s);
    }
    if (v[1] == "+")
        cout << add(v[0], v[2]);
    else
        cout << mul(v[0], v[2]);
    cout << endl;
}

int main()
{
    faster();
    freopen("bignumber.in", "r", stdin);
    freopen("bignumber.out", "w", stdout);
    int test = 1;
    cin >> test;
    clear();
    while (test--)
    {
        solve();
    }
    //pause();
    return 0;
}