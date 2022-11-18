// Sep xep chon
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        // dung 1 bien de luu chi so cua phan tu nho nhat
        int min_pos = i;
        // duyet tat ca cac phan tu sau phan tu hien tai va cap nhat chi so cua phan tu nho nhat
        for(int j=i+1; j<n; j++){
            if(a[j] > a[min_pos]) min_pos = j;
        }
        swap(a[i], a[min_pos]);
    }
}

int main(){
    int a[1000], n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    SelectionSort(a,n):
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}