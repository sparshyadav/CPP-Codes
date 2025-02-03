#include <bits/stdc++.h>
using namespace std;

int main()
{

    int vertex;
    cin >> vertex;

    int edges;
    cin >> edges;

    // Undirected Unweighted Graph
    // vector<vector<bool>> adjacencyMatrix(vertex, vector<bool>(vertex, 0));

    // Undirected Weighted Graph
    vector<vector<int>> adjacencyMatrix(vertex, vector<int>(vertex, 0));

    int u, v, w;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adjacencyMatrix[u][v] = w;
        adjacencyMatrix[v][u] = w;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}