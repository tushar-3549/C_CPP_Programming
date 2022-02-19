#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(23);
    s.insert(67);
    s.insert(89);
    s.insert(12);
    it=s.find(12);
    s.erase(it);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}