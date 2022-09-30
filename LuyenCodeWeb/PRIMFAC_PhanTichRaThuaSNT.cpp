#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    map <long long, long long> m;
    map <long long, long long>::iterator it;
    for(long long i=2; i<=n; i++)
    {
        while(n%i == 0){
            m[i]++;
            n /= i;
        }
    }
    cout << m.size() << endl;
    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

// Cach 2
/*
#include <iostream>
using namespace std;
int countprimefactors(long long int n)
{
	int k = 0;
	if (n == 1) return k;
	else{
		long long int i = 2;
		while (n != 1){
			while (n % i == 0){
				n = n / i;
				if (n % i != 0) k++;
			}
			i++;
		}
		return k;
	}
}
void factorize(long long int n)
{
	if (n == 1) return;
	else{
		long long int i = 2;
		while (n != 1){
			long long dem = 0;
			while (n % i == 0){
				n = n / i;
				dem++;
			}
			if (dem >= 1) cout << i << " " << dem << endl;
			i++;
		}
	}
}
int main()
{
	long long int n;
	cin >> n;
	cout << countprimefactors(n) << endl;
	factorize(n);
	return 0;
}
*/