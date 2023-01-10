// Floyd Warshall Algorithm : Graph & Trees

#include <bits/stdc++.h>
using namespace std;

const   int  INF = 1e9+10;
const   int  N   = 789;
int dist[N][N];

int main()
{
    int n, e;
    cin >> n >> e;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
        }
    }
    while(e--)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        dist[x][y] = wt;
    }
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(dist[i][j] == INF)
            {
                cout << "I ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
/*
6 9
1 2 1
1 3 5
2 3 2
2 4 2
3 5 2
2 5 1
4 5 3
4 6 1
5 6 2
*/
