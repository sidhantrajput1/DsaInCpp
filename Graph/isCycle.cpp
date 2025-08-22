#include<iostream>
#include<vector>
#include<list>

using namespace std;

bool detectCycle(int node, int parent, vector<vector<int>> AdjList, vector<bool>& visited) {
    visited[node] = 1;

    for (int j = 0; j < AdjList[node].size(); j++) {

        if (AdjList[node][j] == parent) 
            continue;
        
        if (visited[AdjList[node][j]]) 
            return 1;
        
        if (detectCycle(AdjList[node][j], node, AdjList, visited)) 
            return 1;
        
    }

    return 0;
}

bool isCycle(int V, vector<vector<int>>& edges) {
    vector<bool> visited(V, 0);

    return detectCycle(0, -1, edges, visited);
}

int main() {
    int vertcies,  edges;

    cin>> vertcies >> edges;

    vector<list<int>>  AdjList(vertcies);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;

        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
}