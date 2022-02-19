#include<bits/stdc++.h>
//#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>us;
    us.insert(12);
    us.insert(10);
    us.insert(14);
    us.insert(5);
    us.insert(9);

    for(auto it:us)
        cout<<it<<" ";
    cout<<endl;
}
