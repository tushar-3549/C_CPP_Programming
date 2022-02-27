#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    int max_xor=0;
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<y;j++)
        {
            max_xor=max(max_xor,i^j);
        }
    }
    cout<<max_xor;
}
