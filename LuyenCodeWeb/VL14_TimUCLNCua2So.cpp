#include<bits/stdc++.h>
using namespace std;
int UC(int a, int b)
{
    if(b==0) return a;
    return UC(b, a%b);
}
int main(){
    int a,b;
    cin >> a >> b;
    if(a < 0 || b < 0) cout << abs(UC(a,b)) << endl;
    else cout << UC (a,b) << endl;
    return 0;

}