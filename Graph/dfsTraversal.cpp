#include<iostream>
#include<vector>
#include<list>

using namespace std;

void dfsHelper(int node , vector<bool>& visited, vector<list<int>> AdjList, vector<int>& result) {
    visited[node] = 1;
    result.push_back(node);

    for (auto neighbour : AdjList[node]) {
        if (!visited[neighbour]) {
            dfsHelper(neighbour, visited, AdjList, result);
        }
    }
}

vector<int> dfsOfGraph(vector<list<int>> AdjList) {
    int v = AdjList.size();
    vector<bool> visited(v, 0);

    vector<int> result;

    dfsHelper(0, visited, AdjList, result);
    return result;
}

int main() {
    int vertcies, edges;

    cin>> vertcies >> edges;

    vector<list<int> >  AdjList(vertcies);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin>> u >> v;

        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    vector<int> result = dfsOfGraph(AdjList);
    
    for (int num : result) {
        cout<<num<<" ";
    }

}