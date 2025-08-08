#include<iostream>
#include<vector>
using namespace std;

// Adjacency matrix
// unweighted graph
// weighted graph

int main() {
    int vertex, edges;
    cin>>vertex>>edges;

    // vector<vector<bool> > Adjmat(vertex, vector<bool>(vertex, 0));
    vector<vector<int> > Adjmat(vertex, vector<int>(vertex, 0));

    int u , v, weight;
    for (int i = 0; i < edges;i++) {
        cin>>u>>v>>weight;
        Adjmat[u][v] = weight;
        Adjmat[v][u] = weight;
    }

    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout<<Adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
}