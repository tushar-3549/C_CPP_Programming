#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool AnagramCheck(string s1,string s2)
{
    int l1,l2;
    l1 = s1.length();
    l2 = s2.length();
    if(l1 != l2)
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<l1;i++)
    {
        if(s1[i] !=s2[i])
            return false;
    }
    return true;
}

int main()
{
    string s1 = "acts";
    string s2 = "cats";
    if(AnagramCheck(s1,s2))
        cout<<"The two strings are Anagram of each other"<<endl;
    else
        cout<<"The two string are not Anagram of each other"<<endl;
    return 0;
}
