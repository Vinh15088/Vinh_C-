#include<bits/stdc++.h>
using namespace std;
#define MOD 10000
void hienthi(int S[], int count){
	for(int i = count - 1; i >= 0; i--){	
		if(i < count - 1 && MOD > 10 && S[i] < 1000)  cout << "0";
		if(i < count - 1 && MOD > 10 && S[i] < 100)  cout << "0";
		if(i < count - 1 && MOD > 10 && S[i] < 10)  cout << "0";
		cout << S[i];
	}
	cout << endl;
}
void nhanso(int S[], int &count, int x){
	int nho = 0;
	for(int i = 0; i < count; i++){
		nho = S[i] * x + nho;
		S[i] = nho % MOD;
		nho = nho/MOD;
	}
	while(nho > 0){
		S[count++] = nho%MOD;
		nho = nho/MOD;
	}
}
void giaithua(int n){
	int S[100000], count = 1;
	S[0] = 1;
	for(int i = 2; i <= n; i++){
		nhanso(S, count, i);
	}
	hienthi(S, count);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		giaithua(n);
	}
}