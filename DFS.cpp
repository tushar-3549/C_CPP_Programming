// DFS
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector <int> v[1000];
int vis[1000];
void DFS(int nd)
{
    vis[nd] = 1;
    cout << nd << "->";
    for(int i=0; i<v[nd].size(); i++)
    {
        int child = v[nd][i];
        if(vis[child] == 0)
        {
            DFS(child);
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    while(edge--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
    return 0;
}


/*
Alternative way : using class :
---------------------------------------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    map<int,bool>visited;
    map<int,list<int>>adj;
    void addEdge(int v,int w);
    void DFS(int v);

};
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}
int main()
{
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    cout << "Following is Depth First Traversal"
         " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}
*/
