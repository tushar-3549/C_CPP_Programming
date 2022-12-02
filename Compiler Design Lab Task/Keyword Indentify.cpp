// Write a Lex/C/C++ program which recognizes the following keywords (int, float, if, then, else, for, printf, switch, case, return) and integers, floating point numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<string,string> mp;
    map<string,bool> valid;

    mp["int"]="Keyword";
    mp["float"]="Keyword";
    mp["if"]="Keyword";
    mp["else"]="Keyword";
    mp["else if"]="Keyword";
    mp["for"]="Keyword";
    mp["printf"]="Keyword";
    mp["switch"]="Keyword";
    mp["case"]="Keyword";
    mp["return"]="Keyword";

    string s;

    cin>>s;

    if(s[0]>='0' and s[0]<='9')
    {
        int digits=0,dots=0,others=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='0' and s[i]<='9')
            {
                digits++;
            }
            else if(s[i]=='.')
            {
                dots++;
            }
            else
            {
                others++;
            }
        }

        if(others>0 or dots>1)
        {
            cout<<"Invalid Keyword"<<endl;
            return 0;
        }

        if(dots==0)
        {
            cout<<"Integer"<<endl;
        }
        else
        {
            cout<<"Floating point"<<endl;
        }
    }
    else
    {
        if(mp.find(s)==mp.end())
        {
            cout<<"Invalid Keyword"<<endl;
            return 0;
        }
        else
        {
            cout<<mp[s]<<endl;
        }
    }



    return 0;
}
