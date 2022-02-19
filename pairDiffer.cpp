//Find a pair with the given difference
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPair(int arr[],int n,int x)
{
    int i=0;
    int j=1;
    while(i<n && j<n)
    {
        if(i!=j && arr[j]-arr[i]==x)
        {
            cout<<"Pair Found:("<<arr[i]<< " , "<<arr[j]<<")";
            return true;
        }
        else if(arr[j]-arr[i]<x)
            j++;
        else
            i++;
    }
    cout<<"Not such pair"<<endl;
    return false;
}
int main()
{
    int arr[]={1,8,30,40,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=60;

    findPair(arr,n,x);
    return 0;
}
