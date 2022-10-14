#include<bits/stdc++.h>
#define ll long long
#define FOR(i,r,l) for(int i=r; i<=l; i++)
#define DOWN(i,r,l) for(int i=r; i>=l; i--)
#define IN(x) x=stoi(x)
#define ST(x) string x = to_string(x)
using namespace std;
string multi(string a, string b, int m){
	int A= a.size(), B= b.size(); 
	vector<int> v(A + B + 1);

	FOR(i, 1, A)
	FOR(j, 1, B)
		v[i+j] += (int) (a[i-1]) * (int) (b[j-1]);
	DOWN(i, A+B, 2){
		v[i-1] += v[i] / 10;
		v[i] %= 10; 
	}		
	
	string c= (v[1]==0 ? "" :  (string) (v[1]));
	FOR(i, 2, m) c += (char)(v[i]);	
	return c;
}
int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        int m;
        cin >> a >> b >> m;
        cout << multi(a,b,m) << endl;
    }
    return 0;
}