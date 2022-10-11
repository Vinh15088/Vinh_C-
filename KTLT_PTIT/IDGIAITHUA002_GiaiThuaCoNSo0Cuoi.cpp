#include<bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll m,n;
ll tinh(ll m){
	ll ans=0,tmp=5;
	while(m>=tmp){
		ans+=m/tmp;
		tmp*=5;
	}
	return ans;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		m=4*n-1000;
		ll x=0;
		while(m<=4*n+1000){
			if(tinh(m)>=n){
				x=m;
				break;
			}
			m++;
		}
		cout<<x<<endl;
    }
}