#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Possible_Ways(int n){
    int count = 0;
    for(int a=0; a<=n/1; a++){
        for(int b=0; b<=n/5; b++){
            for(int c=0; c<=n/10; c++){
                for(int d=0; d<=n/20; d++){
                    for(int e=0; e<=n/50; e++){
                        for(int f=0; f<=n/100; f++){
                            if(a*1 + b*5 + c*10 + d*20 + e*50 + f*100 == n) count++;
                        }
                    }
                }
            }
        }
    }
    return count;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n; 
        cout << "Nhập số tiền bạn muốn rút: ";
        cin >> n;
        cout << "Số cách khả thi: " << Possible_Ways(n) << endl;
    }
    return 0;
}