#include <iostream>
#include<vector>
#include<queue>
#include<list>
#include<unordered_set>

using namespace std;

void printGraph(vector<list<int>>& adjList) {
    for (int i = 0; i < adjList.size(); i++) {
        cout << i << " -> ";
        for (int node : adjList[i]) {
            cout << node << " ";
        }
        cout << endl;
    }
}

void dfs(int node, unordered_set<int> &visited, vector<list<int>>& graph) {
    visited.insert(node);
    for (int neighbour : graph[node]) {
        if (!visited.count(neighbour)) {
            dfs(neighbour, visited, graph);
        }
    }
}

int connected_component(int vertices, vector<list<int>>& graph) {
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < vertices; i++) {
        if (visited.count(i) == 0) {
            result++;
            dfs(i, visited, graph);
        }
    }
    return result;
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    vector<list<int>> adjList(vertices);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    printGraph(adjList);
    cout << endl;

    cout << "Connected Components: " << connected_component(vertices, adjList) << endl;

    return 0;
}
