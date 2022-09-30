/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long a,b, answer=0;
    cin >> a >> b;
    for(int i=1; i*i <=a; i++){
        if(a%i==0){
            if(i*i != a){
                if(b%i != 0) answer += i;
                if(b%(a/i) != 0) answer += (a/i);
            }
            else{
                if(b%i != 0) answer += i;
            }
        }
    }
    cout << answer;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b; cin >> a >> b;
    long long c[100001]= {0}, d[100001]={0}, x=0, y=0;
    for(long long i=1; i<=a; i++){
        if(a%i==0){
            c[x] = i;
            x++;
        }
    }
    for(long long i=1; i<=b; i++){
        if(b%i==0){
            d[y] = i;
            y++;
        }
    }
    for(long long i=0; i< a; i++){
        for(int j=0; j<b; j++){
            if(c[i] == d[j]){
                c[i] = 0;
            }
        }
    }
    int sum =0;
    for(long long i=0; i<a; i++){
        sum += c[i];
    }
    cout << sum;
    return 0;
}