#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;

    int n;
    cout<<"Enter number of colmun : ";
    cin>>n;

    vector<vector<int>> v(m, vector<int> (n));
    
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cin>>v[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            sum += v[i][j];
        }
    }

    cout<<sum;
}