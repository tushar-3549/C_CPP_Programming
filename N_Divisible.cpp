#include<iostream>
#include<bits/stdc++.h>
using namespace std;
set<int>s;
void divisor(int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    divisor(n);
    cout<<s.size()<<endl;
    for(auto it:s)
        cout<<it<<" ";
    s.clear();
    return 0;
}
