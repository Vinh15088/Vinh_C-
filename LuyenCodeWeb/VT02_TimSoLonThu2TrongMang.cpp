#include<iostream>
using namespace std;
int main(){
	unsigned  int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int tg;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			if(A[i]<A[j]){
				tg=A[i];
				A[i]=A[j];
				A[j]=tg;
			}		
	}
    int res = A[0];
    int count = 0;
    for(int i=1;i<n;i++){
        if(res == A[i]) count++;
        else break;
    }
	if(count == n-1) cout<<"NOT FOUND";
	else cout<<A[count +1];
	return 0;
}