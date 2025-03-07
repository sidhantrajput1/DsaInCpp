#include<iostream>
#include<vector>

using namespace std;

// 2. Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns

int main() {
    int m;
    cout<<"Enter number of rows of 1st Matrix : ";
    cin>>m;

    int n;
    cout<<"Enter number of cols of 1st matrix : ";
    cin>>n;

    int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = 10;
        }
    }

    cout<<"Matrix is : "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}