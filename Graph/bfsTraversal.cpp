#include<iostream>
#include<list>
#include<queue>
#include<vector>

using namespace std;

vector<int> bfs(int start, int vertices, vector<list<int> > adjList) {
    // track visted nodes
    vector<bool> visited(vertices, 0);
    queue<int> q;
    
    q.push(start);
    visited[start] = 1;

    vector<int> ans;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int neighbour : adjList[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }

    return ans;
} 

int main() {
    int vertices, edges;

    cin>>vertices>>edges;

    vector<list<int> >  adjList(vertices);
    
    int u, v;
    for (int i = 0; i < edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
        // adjList[v].push_back(v); // remove for directed graph
    }

    vector<int> ans = bfs(0, vertices, adjList);

    for (int num : ans) {
        cout<<num<<" ";
    }

    return 0;
}