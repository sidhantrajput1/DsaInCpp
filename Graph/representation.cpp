#include<iostream>
#include<vector>
#include<list>

using namespace std;



int main() {
    int vertecis, edges;

    // cout << "Enter number of vertices and edges: ";
    cin >> vertecis >> edges;

    vector<list<int>> adjList(vertecis);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  //  Remove this for directed graph
    }

    for (int i = 0; i < vertecis; i++) {
        cout<<i<<"-> ";
        for (auto neighbour : adjList[i]) {
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }    
}

/*
9 10
0 -> 3 2
1 -> 4
2 -> 5
3 -> 6 7
4 -> 9 8
5 -> 7 8

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