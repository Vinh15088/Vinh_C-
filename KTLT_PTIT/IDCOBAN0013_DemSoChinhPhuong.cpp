
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	long long n;
	 	cin >> n;
	 	int max=0;
	 	for(long long i=2;i*i<=n;i++)
	 	{
	 		while(n%i==0)
	 		{
	 			n /=i;
	 			max=i;
			 }
		 }
		 if( n!=1) cout << n;
		 else cout << max;
		 cout << endl;
	 }
}
