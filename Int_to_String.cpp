#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s="";
    while(n!=0)
    {
        s+=(n%10)+'0';
        n/=10;
    }
    for(int i=s.size()-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}
