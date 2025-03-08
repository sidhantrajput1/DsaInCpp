#include<iostream>
#include<vector>

using namespace std;


int main() {
    int m;
    cout<<"Enter number of rows of 1st Matrix : ";
    cin>>m;

    int n;
    cout<<"Enter number of cols of 1st matrix : ";
    cin>>n;

    vector<vector<int>> a(m, vector<int>(n));
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"Matrix is : "<<endl;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int size = a.size();
    int mid = size / 2;

    cout<<"Middle column : "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<a[i][mid]<<" ";
    }

    cout<<endl;
    
    cout<<"Middle row : "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<a[mid][i]<<" ";
    }
}