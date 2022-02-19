#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int b,int p,int m)
{
    int res=1;
    while(p)
    {
        if(p%2==1)
        {
            res=(res*b)%m;
            p--;
        }
        else
        {
            b=(b*b)%m;
            p/=2;
        }
    }
    return res%m;
}
int main()
{
    int a,b,m;//(a/b)%m
    cin>>a>>b>>m;
    int ans = power(b,m-2,m);
    cout<<ans<<endl;
    return 0;
}
