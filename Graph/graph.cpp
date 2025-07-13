#include<iostream>
#include<vector>

using namespace std;

class Graph {
public: 
    int V;
    vector<vector<int>> adjList;

    Graph(int vertices) {
       V = vertices;
       adjList.resize(V); 
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout<<i<<" -> ";
            for (int adj : adjList[i]) {
                cout<< adj;
            }
            cout<<endl;
        }
    }
};


int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    g.printGraph();

    return 0;

}


/*
 vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        // boolean list to mark all the vertices as not visited.
        vector<bool> vis(V, false);
        int s = 0;

        // initially we mark first vertex as visited(true).
        vis[s] = true;

        vector<int> res;

        // creating a queue for BFS and pushing first vertex in queue.
        queue<int> q;
        q.push(s);

        while (!q.empty()) {

            // Dequeue a vertex from queue and store it
            int curr = q.front();
            q.pop();
            res.push_back(curr);

            Get all adjacent vertices of the dequeued
            vertex curr If an adjacent has not been
            visited, mark it visited and enqueue it
            for (int x : adj[curr]) {
                if (!vis[x]) {
                    vis[x] = true;
                    q.push(x);
                }
            }
        }
        // returning the output list.
        return res;
    }

*/