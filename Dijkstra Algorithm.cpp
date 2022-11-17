// Using Dijkstra Algorithm calculate source node to each node's distance. 

#include <bits/stdc++.h>
#define    pb              push_back
#define    endl            '\n'
#define    ll              long long int

using namespace std;
const   int   N   = 1e5+10;
const   int   INF = 1e9+10;

vector < pair < int, int > > adj[N]; // (node, weight)
//int dist[N];
vector <int> dist(N, INF);
void dijkstra(int s, int n)
{
    //vector <int> dist(N, INF);
    vector <int> vis(N, 0);
    set < pair <int,int> > st; // (weight, node)
    st.insert({0, s});
    dist[s] = 0;
    while(st.size() > 0)
    {
        auto nod = *st.begin();
        int v_nod = nod.second;
        int v_dis = nod.first;
        st.erase(*st.begin());
        if(vis[v_nod])
            continue;
        vis[v_nod] = 1;
        for(auto child: adj[v_nod])
        {
            int child_v = child.first;
            int wt = child.second;

            if(dist[v_nod] + wt < dist[child_v])
                dist[child_v] = dist[v_nod] + wt;
            st.insert({dist[child_v], child_v});
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int node, edges;
    cin >> node >> edges;
    //while(edges--)
    for(int i = 1; i <= edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
    }
    dijkstra(1, node);
    for(int i = 1; i <= node; i++)
        cout << dist[i] << " ";
    cout << endl;

    return 0;
}
