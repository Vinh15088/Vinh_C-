#include<bits/stdc++.h>
using namespace std;
#define ll long long
// LIFO: Last in first out
// S(n) = 1+ 2 + 3 ... + n
// n! = n*(n-1)*(n-2)...*1
// UCLN cua a va b
    // gcd(a,b) =
        // a if b==0
        // gcd(b, a%b)
// a^b= 
    // 1 if b=0
    // a^(b/2) * a^(b/2) if b chan
    // a^(b/2) * a^(b/2) * a if b le

// su dung ham de quy de dem so luong chu so cua mot so
// ktra mang co phai la mang doi xung hay khong
int Sum(int n){
    if(n==1) return 1;
    else return n+Sum(n-1);
} 

int Factorial(int n){
    if(n==0) return 1;
    else return Factorial(n-1) * n;
}

ll fibo(int n){
    if(n<=1) return n;
    else return fibo(n-1) + fibo(n-2);
}

ll C(int n, int k){
    if(k==0 || n==k) return 1;
    else return C(n-1, k-1) + C(n-1, k);
}

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, b%a);
}

int binpow(int a, int b){
    if(b==0) return 1;
    int x=binpow(a, b/2);
    if(b%2==1) return a*x*x;
    else return x*x;
}

// dem so luong chu so cua mot so
int count(int n){
    if(n<10) return 1;
    else return 1+count(n/10);
}

// ktra mang doi xung
int check(int a[], int l, int r){
    if(l>=r) return 1;
    if(a[l] != a[r]) return 0;
    else return check(a, l+1, r-1);
}
int main(){
    // int n; cin >> n;
    // cout << Sum(n) << endl;
    // cout << Factorial(n) << endl;
    // cout << fibo(n) << endl;
    // cout << C(5,2) << endl;
    // cout << gcd(10,45) << endl;
    // cout << binpow(2,10) << endl;
    // cout << count(1234556) << endl;
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    if(check(a, 0, n-1)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}