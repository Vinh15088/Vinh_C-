// Thuat toan tim kiem nhi phan, cac phan tu phai duoc sap xep
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// C1 dung cach thong thuong
// C2 dung de quy
// ham co san
/*
binary_search(a+x, a+y, key) => a[x] --> a[y]
binary_search(a+1, a+4, key) => 
binary_search(v.begin(), v.end(), key)
binary_search(v.begin()+x, v.end()+y, key) => v[x] --> v[y]
*/

//C1
bool BS(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int m = (l+r)/2;
        if(a[m] == x){
            return true;
        }
        else if(a[m] < x){
            l = m+1;
        }
        else r = m-1;
    }
    return false;
}

// C2
bool binary_search(int a[], int l, int r, int x){
    if(l>r) return false;
    int m = (l+r)/2;
    if(a[m] == x) return true;
    else if(a[m] < x) return binary_search(a,m+1,l,x);
    else return binary_search(a,l,m-1,x);
}
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(BS(a,n,x)) cout << "FOUND" << endl;
    else cout << "NOT FOUND" << endl;
    /* 
    if(binary_search(a,0,n-1,x)) cout << "FOUND" << endl;
    else cout << "NOT FOUND" << endl;
    */

   // dung ham co san
   /*
   if(binary_search(a,a+n,x)) cout << "FOUND" << endl;
   else cout << "NOT FOUND" << endl;
   */


  // doi voi vector
  int n; cin >> n;
  vector<int v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  if(binary_search(v.begin(), v.end(), x)) cout << "FOUND" << endl;
  else cout << "NOT FOUND" << endl;
    return 0;
}

// tim vi tri dau tien va cuoi cung cua x trong mang da sap xep
int first_pos(int a[], int n, int x){
    int res = -1;
    int l=0; r=n-1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            res = m;
            r = m-1;
        }
        else if(a[m] < x) l=m+1;
        else r = m-1;
    }
    return res;
}
int last_pos(int a[], int n, int x){
    int res = -1;
    int l=0; r=n-1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] == x){
            res = m;
            l = m+1;
        }
        else if(a[m] < x) l=m+1;
        else r=m-1;
    }
    return res;
}
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << first_pos(a,n,x) << " " << last_pos(a,n,x) << endl;
    return 0;
}