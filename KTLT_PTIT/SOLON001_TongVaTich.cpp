#include<bits/stdc++.h>
using namespace std;

// string Multi(string s1, string s2){
//     string result = "";
//     int l1 = s1.length();
//     int l2 = s2.length();
//     result.assign(l1 + l2, '0'); // gán cho string result = s1 + s2 là các cố 0
//     for(int i=l1-1; i>=0; i--){
//         int carry = 0;
//         int j;
//         for( j=l2-1; j>=0; j--){
//             int mul = (s1[i] -  '0') * (s2[j] - '0') + carry + (result[i+j] - '0');
//             result[i+j] = mul%10 + '0';
//             carry = mul/10;
//         }
//         if(carry > 0) result[i+j] = carry + '0';
//     }
//     while(result[0] == '0' && result.length() > 1){
//         result.erase(0,1);
//     }
//     return result;
// }
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

string Add(string s1, string s2){
    int carry = 0;
    string res = "";
    for (int i = s1.length() - 1, j = s2.length() - 1; i >= 0 || j >= 0; i--, j--){
        int a = (i >= 0) ? s1[i] - '0' : 0;
        int b = (j >= 0) ? s2[j] - '0' : 0;
        int sum = a + b + carry;
        if (sum >= 10){
            sum = sum % 10;
            carry = 1;
        }
        else
            carry = 0;
        res = to_string(sum) + res;
    }
    if (carry == 1) res = "1" + res;
    return res;
}

void solve()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> v;
    while (ss >> s){
        v.push_back(s);
    }
    if (v[1] == "+")
        cout << Add(v[0], v[2]);
    else
        cout << mul(v[0], v[2]);
    cout << endl;
}
int main(){
    freopen("bignumber.in", "r", stdin);
    freopen("bignumber.out", "w", stdout);
    int t; cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}