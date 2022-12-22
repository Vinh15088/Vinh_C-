#include<bits/stdc++.h>
using namespace std;
const long long Mod=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long var;
		priority_queue<long long, vector<long long>, greater<long long> > a;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>var;
			a.push(var);
		}
		long long res=0;
		while(a.size()>1){
			long long x=a.top(); a.pop();
			long long y=a.top(); a.pop();
			long long tmp=(x+y)%Mod;
			a.push(tmp);
			res+=tmp;
			res%=Mod;
		}
		cout << res << endl;
	}
}