#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool b=false;
        if(n==2)
        {
            cout<<"Prime"<<endl;
        }
        else if(n%2==0)
        {
             cout<<"Not Prime"<<endl;


        }
        else
        {
            for(int j=3; j<sqrt(n); j+=2)
            {
                if(n%j==0)
                    b=true;
            }
            if(b==true)
            {
                cout<<"Not Prime"<<endl;
            }
            else
            {
                cout<<"Prime"<<endl;
            }
        }
        b=false;

    }
    return 0;
}
