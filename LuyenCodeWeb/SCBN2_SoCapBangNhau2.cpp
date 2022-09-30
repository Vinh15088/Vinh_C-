#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;cin>>n;
	int a[n]; 
	map<int,int> mp;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		mp[a[i]]++;
	}
	long long count=0;
	for(auto it:mp)
	{
		long long x=it.second;
		if(x>=2)
		{
			count+=(x-1)*(x-1+1)/2; 
		}
	}
	cout<<count<<endl;
}