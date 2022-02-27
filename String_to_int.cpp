#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string s="1278964";
    int con;
    con=stoi(s);
    cout<<s; */

    /*string s="18347459895";
    int i;
    istringstream(s)>>i;
    cout<<i;*/

    /*string s="123483535";
    int len = s.size();
    cout << s << endl;
    s.erase(remove(s.begin(), s.begin() + len, '3'), s.end());
    cout << s << endl;*/

    //int n=s.size();
    //int x=(s[n-1]-'0')+10*(s[n-2]-'0')+100*(s[n-3]-'0')+1000*(s[n-4]-'0')+10000*(s[n-5]-'0')+100000*(s[n-6]-'0');
    //cout<<x<<endl;
    string s;
    cin>>s;
    int a=0;
    int n=s.size();
    int p=1;
    for(int i=n-1;i>=0;i--)
    {
        int d=(s[i]-'0');
        a+=(p*d);
        p*=10;
    }
    cout<<s<<endl;

    return 0;
}
