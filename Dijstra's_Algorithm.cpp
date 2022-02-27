#include <iostream>
#include <limits.h>
#include <bits/stdc++.h>
using namespace std;
#define V 9

int minDistance(int dist[], bool sptset[])
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
    {
        if (sptset[v] == false && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printSol(int dist[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << i << "\t \t" << dist[i] << endl;
    }
}

void dijstra(int graph[V][V], int src)
{
    int dist[V];
    bool sptset[V];
    //int parent[V];
    for (int i = 0; i < V; i++)
    {
        // parent[0]=-1;
        dist[i] = INT_MAX;
        sptset[i] = false;
    }
    dist[src] = 0;
    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, sptset);
        sptset[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (!sptset[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                // parent[v]=u;
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    // printSol(dist,V,parent);
    printSol(dist);
}

int main()
{
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 0, 10, 0, 2, 0, 0},
                       {0, 0, 0, 14, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    dijstra(graph, 0);

    return 0;
}
