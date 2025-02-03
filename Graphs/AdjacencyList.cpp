#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vertex;
    cin >> vertex;

    int edges;
    cin >> edges;

    // Unweighted Undirected Graph
    // vector<int> adjacencyList[vertex];

    // Weighted Undirected Graph
    vector<pair<int, int>> adjacencyList[vertex];

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjacencyList[u].push_back(make_pair(v, w));
        adjacencyList[v].push_back(make_pair(u, w));
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adjacencyList[i].size(); j++)
        {
            cout << "[" << adjacencyList[i][j].first << " " << adjacencyList[i][j].second << "]";
        }

        cout << endl;
    }
}