#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

unordered_map<int, list<pair<int, int>>> graph;

void add_edge(int src, int dest, int weight, bool bi_dir = true) {
    graph[src].push_back({dest, weight});
    if (bi_dir) {
        graph[dest].push_back({src, weight});
    }
}

void display() {
    for (auto &node : graph) {
        cout << node.first << " -> ";
        for (auto &nbr : node.second) {
            cout << "(" << nbr.first << ", wt: " << nbr.second << ") ";
        }
        cout << endl;
    }
}

int main() {
    int v, e;
    cin >> v >> e;
    while(e--) {
        int s, d, w;
        cin >> s >> d >> w;
        add_edge(s, d, w);
    }
    display();
}
