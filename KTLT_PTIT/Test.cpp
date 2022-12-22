#include<bits/stdc++.h>
using namespace std;

int n, t;
float x;

float Pow(float x, int n)
{
    float ans = 1;
    while (n--)
        ans *= x;
    return ans;
}
float calc(int n)
{
    if (n == 1)
        return sqrt(x);
    return sqrt(Pow(x, n) + calc(n - 1));
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cout << fixed << setprecision(3) << calc(n) << '\n';
    }
}