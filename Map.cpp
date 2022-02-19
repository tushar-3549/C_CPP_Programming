#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["Tushar"]=34;
    m["Maruf"]=67;
    m["Sakib"]=45;
    m.insert(make_pair("Rahul",99));
   // cout<<m["Tushar"]<<endl;
   it=m.begin();
   cout<<it->first<<endl;

}