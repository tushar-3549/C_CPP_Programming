#include<iostream>
#include<bits/stdc++.h>
#include<bitset>
using namespace std;
int main()
{
    bitset<8>b(string("1101"));
    //b.set();
    //b.reset();
    //cout<<b<<endl;
    //cout<<b[1]<<endl;
    if(b.any()){
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }
}