#include <bits/stdc++.h>
using namespace std;

void hoanvi(int arr[15], int n)
{
        do{
            for(int i = 0; i<n;i++)
                cout << arr[i] <<(i<(n-1)?" ":"\n");
        }while(next_permutation(arr, arr + n));
}

int main()
{
    int t;
    cin>> t;
    while(t--) {
    int n; 
    cin >> n;
    int arr[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    hoanvi(arr,n);
    }
    return 0;
}