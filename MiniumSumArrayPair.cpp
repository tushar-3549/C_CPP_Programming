#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int findMinSum(long long int a[],long long int b[],int n)
{
   long long  int sum=0;
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(a[i]-b[i]);

    }
    return sum;

}
int main()
{
    long long int a[]={4,1,7,3};
    long long int b[]={1,3,5,9};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    cout<<findMinSum(a,b,n)<<endl;

    return 0;
}
