#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long a[100000], n, i=0, dem=0;
		cin>>n;
		if(n==0) cout<<0;
		while(n>0){
			a[i]=n%16;
			n=n/16;
			dem++;
			i++;
		}
		for(long long i=dem-1 ; i>=0 ; i--){
			if(a[i]==10) cout<<"A";
			if(a[i]==11) cout<<"B";
			if(a[i]==12) cout<<"C";
			if(a[i]==13) cout<<"D";
			if(a[i]==14) cout<<"E";
			if(a[i]==15) cout<<"F";
			if(a[i]<10) cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}