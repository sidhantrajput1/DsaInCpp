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

/*
9 10
0 3
0 2
1 4
2 5
3 6
3 7
4 9
4 8
5 7
5 8
*/