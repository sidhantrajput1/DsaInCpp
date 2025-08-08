#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

unordered_map<int, list<int>> graph;

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void display() {
    for (auto &node : graph) {
        cout << node.first << " -> ";
        for (int nbr : node.second) {
            cout << nbr << " , ";
        }
        cout << endl;
    }
}

int main() {
    int v, e;
    cin >> v >> e;
    while(e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    display();
}
