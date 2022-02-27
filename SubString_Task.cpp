#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="abdcab";
    string s2="bab";
    string ss;
    for(int i=0; i<s1.size(); i++)
    {
        for(int j=0; j<s1.size()-i; j++)
        {
            ss=s1.substr(i,j+1);
            cout<<ss<<endl;
        }
        if(ss==s2)
        {
            cout<<"Sub String Possible\n";
        }
        else
        {
            cout<<"Sub String Not Possible\n";
        }
    }

    /*string s,ss;
    cin>>s;
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        ss=s.substr(0,i+1);
        cout<<ss<<endl;
    }
    */
    return 0;
}
