#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primefact(int n)
{
    int cnt=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            cout<<i<<"^"<<cnt;
            cout<<endl;
        }
    }
    if(n>1)
        cout<<n<<"^"<<cnt;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        primefact(n);
    }
}
