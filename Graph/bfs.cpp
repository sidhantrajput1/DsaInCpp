#include <iostream>
#include<vector>
#include<queue>
#include<list>

using namespace std;

void printGraph(vector<list<int>>& adjList) {
    for (int i = 0; i < adjList.size(); i++) {
        cout<<i<<"-> ";
        for (int node : adjList[i]) {
            cout<<node<<" ";
        }
        cout<<endl;
    }
}


vector<int> bfsTraversal(int start, int vertices, vector<list<int>>& adjList) 
{
    // create a visited vector
    vector<bool> visited(vertices, false);
    // create queue
    queue<int> q;
    
    // push the first node on queue
    q.push(start);
    // mark the visited 
    visited[start] = true;
    
    // create a answer vetor
    vector<int> ans;
    
    // queue ko empty hone tak chalyenge
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        
        // push the curr element in ans vector
        ans.push_back(curr);
        
        for (int neighbour : adjList[curr]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
        
    }
    
    return ans;
}

void print(vector<int>& nums) {
    for (int num : nums) cout<<num<<" ";
    cout<<endl;
}

int main() {
    int vertices, edges;
    cin>>vertices>>edges;
    
    vector<list<int>> adjList(vertices);
    
    int u, v;
    for (int i = 0; i < edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    printGraph(adjList);
    
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    vector<int> result = bfsTraversal(0, vertices, adjList);
    print(result);
    
    return 0;
}








// 0 -> 1, 2
// 1 -> 0, 5, 7
// 2 -> 0, 3, 4
// 3 -> 2
// 4 -> 2
// 5 -> 1, 6
// 6 -> 5, 8
// 7 -> 1, 8
// 8 -> 6, 7