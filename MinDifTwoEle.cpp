#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMinDif(int arr[],int n)
{
    int dif = INT_MAX; //infinite
    for(int i=0; i<n-1; i++)

        for(int j=i+1; j<n; j++)

            if(abs(arr[i]-arr[j])<dif)
                dif=abs(arr[i]-arr[j]);

    return dif;


}
int main()
{

    int arr[]= {1,5,3,19,18,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum difference is  "<<findMinDif(arr,n);
    return 0;
}
