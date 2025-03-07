#include<iostream>
#include<vector>

using namespace std;

// Q4: Write a C++ program to find the largest element of a given 2D array of integers.

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

    cout<<"Matrix is : "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int max = a[0][0];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if ( a[i][j] > max) max = a[i][j];
        }
    }

    cout<<"Max Element : "<<max<<endl;
}