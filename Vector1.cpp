#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<iterator>
#include<vector>
using namespace std;
int main()
{

    vector<int>vec;//(size,number)
    vector<int>::iterator it;
    /*vec.push_back(12);
    vec.push_back(345);
    vec.push_back(45);
    vec[0]=78;*/
    for(int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }
    //cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {

       // cout<<vec[i]<<endl;
       cout<<vec[i]<<"\t";
    }
    puts("");
    it = vec.begin();
    it++;
    cout<<*it<<endl;
    return 0;
}
