#include<bits/stdc++.h>
#define N 1000000

using namespace std;
int main(){
    double Sum[N];
    Sum[1] = 1.0;
    for(int i=2; i<= N; i++){
        Sum[i] = Sum[i-1] + 1.0 / ( 2.0 * i - 1);
    }
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << fixed << setprecision(5) << Sum[arr[i]] << endl;
    }
    return 0;
}
