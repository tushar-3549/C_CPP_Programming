#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=a;
    while(a>=b)
    {
        x=x+(a/b);
        a=(a/b)+(a%b);
    }
    cout<<x<<endl;
    return 0;
}