#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; // n = objects, k = bag size
    cin>>n>>k;
    int w[n+1],c[n+1];
    int dp[n+1][k+1];
    for(int i=1;i<=n;i++)
        cin>>w[i];
    for(int i=1;i<=n;i++)
        cin>>c[i];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(i==0 || j==0) //(!i || !j)
            {
                dp[i][j]=0;
                continue;
            }
            if(w[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j-w[i]] + c[i],dp[i-1][j]);
        }
    }
    cout<<dp[n][k]<<endl;
    return 0;
}
