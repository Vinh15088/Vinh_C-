#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double a,b,c,d,e,f;///a-d b-e c-f
    cin>>a>>b>>c>>d>>e>>f;
    long double x,y;
    y=(a*f-d*c)/(a*e-b*d);
    x=(c-b*y)/a;
    if(a/d!=b/e&&a*e!=d*b){
        if(x!=0&&y!=0)
        cout<<fixed<<setprecision(2)<<x<<" "<<y;
        else if(x==0) cout<<fixed<<setprecision(2)<<abs(x)<<" "<<y;
        else if(y==0) cout<<fixed<<setprecision(2)<<x<<" "<<abs(y);
    }
    else if(a*e==d*b){
        if(a/d==b/e&&b/e!=c/f) cout<<"VONGHIEM";
        else if(a/d==b/e&&b/e==c/f) cout<<"VOSONGHIEM";
    }
}