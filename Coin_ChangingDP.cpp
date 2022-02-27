#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin >> n >> c;
    int coins[n+1];
    int dp[n+1][c+1];
    memset(dp,0,sizeof(dp));
    for(int i=1; i<=n; i++)
        cin >> coins[i];
    for(int i=0; i<=n; i++)
        dp[i][0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=c; j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=coins[i])
                dp[i][j]+=dp[i-1][j-coins[i]];
        }
    }
    if(dp[n][c] > 0)
    {
        cout << "YES" << endl;
        int i=n,j=c;
        while(i && j)
        {
            if(dp[i-1][j] > 0)
            {
                i--;
                continue;
            }
            else
            {
                //cout << " ";
                cout << coins[i];
                cout << " ";
                j-=coins[i];
                i--;
            }
        }
        cout << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
