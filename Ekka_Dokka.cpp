#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n,m,w;
    for(int i=1;i<=t;i++)
    {
        cin>>w;
        if(w%2==0)
        {
            n=w/2;
            m=2;
            while(n%2==0)
            {
                n=n/2;
                m=m*2;
            }
            cout<<"Case"<<" "<<i<<":"<<" "<<n<<" "<<m<<endl;
        }
        else
        cout<<"Case"<<" "<<i<<":"<<" "<<"Impossible"<<endl;
    }

    return 0;

}
