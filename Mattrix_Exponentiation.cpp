#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 101
int arr[N][N],I[N][N];
void mul(int A[][N],int B[][N],int n)
{
    int i,j,k;
    int R[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            R[i][j]=0;
            for(k=0; k<n; k++)
            {
                int x = (A[i][k]*B[k][j]); // matrix multiplication
                R[i][j]=(R[i][j]+x);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            A[i][j]=R[i][j];
        }
    }
}

void power(int A[][N],int n,int p)
{
    int i,j;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                I[i][j]=1;
            else
                I[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2==1)
        {
            mul(I,A,n);
            p--;
        }
        else
        {
            mul(A,A,n);
            p/=2;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            A[i][j]=I[i][j];
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p; // dimension,power
        cin>>n>>p;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        power(arr,n,p);
        //output
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
