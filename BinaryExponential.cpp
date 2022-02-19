#include<bits/stdc++.h>
using namespace std;
int power(int n,int m)
{
    int res=1;
    while(n)
    {
        if(m%2==1)
        {
            res*=n;
            m--;
        }
        else
        {
            n*=n;
            m/=2;
        }
    }

    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m; // base,power
        cout<<power(n,m)<<endl;
    }
}
