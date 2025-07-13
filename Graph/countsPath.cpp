#include <iostream>
#include <vector>

using namespace std;

int countPaths(int n, vector<vector<int>> &roads)
{
    vector<vector<pair<int, int>>> graph(n);

    for (const auto& road : roads) {
        int u = road[0], int v = road[1], time = road[2];\\
        graph[u].emplace_back(v, time);
        graph[v].emplace_back(u, time);
    }

    vector<long long> dist(n, LLONG_MAX);
    vector<int> ways(n, 0);

    dist[0] = 0;
    ways[0] = 1;

    // initialize priority queue
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;

    const int MOD = 1e9 + 7;

    while (!pq.empty())
    {
        auto [d, node] = pq.top();
        pq.pop();

        if (d > dist[node]) continue;

        for (const auto& [neighbour, time] : graph[node]) {
            if (dist[node] + time < dist[neighbor]) {
                dist[neighbor] = dist[node] + time;
                ways[neighbor] = ways[node];
                pq.emplace(dist[neighbor], neighbor);
            } else if (dist[node] + time == dist[neighbor]) {
                ways[neighbor] = (ways[neighbor] + ways[node]) % MOD;
            }
        }
    }
    return ways[n-1];
}

int main()
{
    vector<vector<int>> roads = { {0, 6, 7}, {0, 1, 2}, {1, 2, 3},
                                  {1, 3, 3}, {6, 3, 3}, {3, 5, 1},
                                  {6, 5, 1}, {2, 5, 1}, {0, 4, 5},
                                  {4, 6, 2} 
                                };
    int n = roads.size();
    cout<<countPaths(n , roads);
}