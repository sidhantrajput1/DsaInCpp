#include<iostream>
#include<list>
#include<vector>

using namespace std;

// Unweighted graph

int main() {
    int vertex, edges;
    cin>>vertex>>edges;

    vector<list<int>> adjList(vertex);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); //  Remove this for directed graph
    }

    for (int i = 0; i < vertex; i++) {
        cout<<i<<" -> ";
        for (auto neighbour : adjList[i]) {
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }
}