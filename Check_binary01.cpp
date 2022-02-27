#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkString(string s)
{
    int len = s.length();
    int first,last;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='1')
        {
            first = i;
            break;
        }
    }
    for(int i=len-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            last = i;
            break;
        }
    }
    for(int i=first; i<=last; i++)
    {
        if(s[i]=='0')
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;//1010001 or 00011111100
    cin >> s;
    if(checkString(s))
        cout << "String is Valid" << endl;
    else
        cout << "String is not Valid" << endl;
    return 0;
}
