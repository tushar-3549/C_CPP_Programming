#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int pre[n];
        pre[0]=0;
        for(int i=0; i<n; i++)
            pre[i]=gcd(pre[i-1],arr[i]);
        int pos[n];
        pos[n+1]=0;
        for(int i=n; i>=n; i--)
            pos[i]=gcd(pos[i+1],arr[i]);
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],pos[r+1]);
            cout<<ans<<endl;
        }
    }

    return 0;
}
