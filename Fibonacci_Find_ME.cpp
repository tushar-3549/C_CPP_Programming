//Fibonacci finding using matrix Exponentiation
#include<bits/stdc++.h>
using namespace std;
#define N 5
int I[N][N],T[N][N];
void mul(int A[N][N],int B[N][N],int dim)
{
    int res[dim+1][dim+1];
    for(int i=0; i<dim; i++)
    {
        for(int j=0; j<dim; j++)
        {
            res[i][j]=0;
            for(int k=0; k<dim; k++)
            {
                int x=(A[i][k]*B[k][j]);
                res[i][j]=(res[i][j]+x);

            }
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            A[i][j]=res[i][j];
    }

}
void solve(int n,int a,int b)
{
    I[0][0]=I[1][1]=1;
    I[0][1]=I[1][0]=0;

    T[0][0]=0;
    T[0][1]=T[1][0]=T[1][1]=1;
    n--;
    while(n) // n!=0
    {
        if(n%2==1)
        {
            mul(I,T,2);
            n--;
        }
        else
        {
            mul(T,T,2);
            n/=2;
        }
        cout << I[0][0] << ' ' << I[0][1] << endl;
        cout << I[1][0] << ' ' << I[1][1] << endl;
    }

    int ans=a*I[0][1]+b*I[1][1];
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a=0;
        int b=1;
        int n;
        cin>>n;
        solve(n,a,b);
    }
    return 0;
}
