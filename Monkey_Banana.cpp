#include <bits/stdc++.h>
using namespace std;

const int N = 205;
int dp[N][N], n;
vector<int> a[N];

int solve(int i, int j)
{
    if (i >= 2 * n - 1 or j >= a[i].size() or j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ret = a[i][j];
    if (i < n - 1)
        ret += max(solve(i + 1, j), solve(i + 1, j + 1));
    else
        ret += max(solve(i + 1, j - 1), solve(i + 1, j));
    return dp[i][j] = ret;
}

int main()
{
    int t;
    cin >> t;
   // while (t--)
   for(int k=1;k<=t;k++)
    {
        cin >> n;
        int x;
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
            {
                cin >> x;
                a[i].push_back(x);
            }
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
            {
                cin >> x;
                a[n + i].push_back(x);
            }
        memset(dp, -1, sizeof(dp));
        cout << "Case "<<k<<": "<<solve(0, 0) << endl;
        for (int i = 0; i <= 2 * n; i++)
            a[i].clear();
    }
    return 0;
}


