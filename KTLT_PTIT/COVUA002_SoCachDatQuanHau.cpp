#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[13]={0,1,0,0,2,10,4,40,92,352,724,2680,14200};
        cout << a[n] << endl;
    }
    return 0;
}


// Cach 2: su dung quay lui (BackTracking)
#include<bits/stdc++.h>
using namespace std;
int N, X[100], cot[100], d1[100], d2[100];
int a[100][100], count = 0;

void InResult(){
    memset(a, 0, sizeof(a));
    for(int i=1; i<=N; i++){
        a[i][X[i]] = 1;
    }
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i){
    // Duyet cac kha nang ma X[i] co the nhan duoc
    for(int j=1; j<=N; j++){
        // chuan bi gan X[i] = j
        if(cot[j] == 1 && d1[i-j+N] == 1 && d2[i+j-1] == 1){
            X[i] = j;
            cot[j] = d1[i-j+N] = d2[i+j-1] = 0;
            if(i==N)  count ++;//InResult();
            else Try(i+1);
            cot[j] = d1[i-j+N] = d2[i+j-1] = 1;
        }
    }
}

int main(){
    cin >> N;
    for(int i=1; i<=99; i++){
        cot[i] = d1[i] = d2[i] = 1;
    }
    Try(1);
    // neu muon In ra so cau hinh
    cout << count << endl;
    return 0;
}