#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<vector<int>> v1 = {{1, 2, 3, 4, 5, 6, 7, 8, 9}};
    vector<vector<int>> v2 = {{1, 2, 3, 4, 5, 6, 7, 8, 9}};

    // vector<vector<int>> res (v1.size(), vector<int>(v1[0].size()));

    // for(int i = 0; i < v1.size(); i++) {
    //     for(int j = 0; j < v1[i].size(); j++) {
    //         res[i][j] = v1[i][j] + v2[i][j]; 
    //     }
    // }

    // for(int i = 0; i < res.size(); i++){
    //     for(int j = 0; j < res[i].size(); j++) {
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v1[i].size(); j++) {
            cout<<v1[i][j]+ v2[i][j]<<" ";
        }
        cout<<endl;
    }
    
}  