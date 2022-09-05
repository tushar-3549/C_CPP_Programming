// Topological Sort in Graph Theory

#include <bits/stdc++.h>
using namespace std;
vector <int> v[1001];
vector <int> res;
int mp[1001];
void dfs(int n)
{
    queue <int> q;
    for(int i = 1; i <= n; i++)
    {
        if(mp[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        res.push_back(cur);
        for(int child : v[cur])
        {
            mp[child]--;
            if(mp[child] == 0)
                q.push(child);
        }
    }
    cout << "The Topological Sort is :" << endl;
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        mp[y]++;
    }
    dfs(n);

    return 0;
}
