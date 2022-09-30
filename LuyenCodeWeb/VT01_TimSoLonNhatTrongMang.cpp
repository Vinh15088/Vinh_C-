#include<bits/stdc++.h>
using namespace std;
void in(int a[], int &n)
{
    if(n<0) return ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void FindMaxArr(int a[], int n)
{
    int Max=a[0];
    for(int i=0;i<n;i++)
    {
        if(Max<a[i])
        {
            Max=a[i];
        }
    }
    cout<<Max;
}
int main()
{
    int n;
    int a[100];
    cin>>n;
    in(a,n);
    FindMaxArr(a,n);
}