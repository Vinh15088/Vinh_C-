#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long a[100], b[100];
        long long n;
        cin >> n;
        long long m=n;
        int count=0;
        if(n%2==0){
            while(n%2==0){
                count++;
                n/=2;
            }
            a[0]=2;
            b[0]=count;
        }
        int j=1;
        for(long long i=3; i<=sqrt(n); i+=2){
            int count1=0;
            if(n%i==0){
                while(n%i==0){
                    count1++;
                    n/=i;
                }
                a[j]=i;
                b[j]=count1;
                j++;
            }
        }
        if(n>1){
            a[j]=n;
            b[j]=1;
        }
        long long T=1;
        if(m%2==0){
            for(int k=0; k<=j; k++){
                T *= ((pow(a[k],b[k]+1)-1) * 1.0/(a[k]-1));
            }
        }
        else{
            for(int k=1; k<=j; k++){
                T *= ((pow(a[k],b[k]+1)-1) * 1.0/(a[k]-1));
            }
        }
        if(T-m==m) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}