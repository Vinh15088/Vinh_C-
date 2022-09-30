/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    a[0] = a[n] = 0;
    int temp = 0, count = 0, ans = 0, max = 0;
    for(int i=0; i<n; i++){
        if(a[i]!= a[i-1]){
            if(count >= ans){
                ans = count;
                max = temp;
            }
            temp = a[i];
            count = 1;
        }
        else count++;
    }
    cout << max << " " << ans;
    return 0;
}
*/

#include<bits/stdc++.h>
#define for(i,l,r) for(int i=l; i<=r; i++)
#define ll long long
using namespace std;
int n; 
ll x;
map<ll, int> f;
int qua = 0;
ll height;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(i,1,n){
        cin >> x;
        f[x]++;
        if(f[x] > qua || f[x] == qua && x > height){
            qua = f[x];
            height = x;
        }
    }
    cout << height << " " << qua;
    return 0;
}