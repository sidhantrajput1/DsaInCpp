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

    int a[m][n];
    cout<<"Enter element of a Matrix : "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }

    cout<<endl;

    int p;
    cout<<"Enter number of rows of 2nd Matrix : ";
    cin>>p;

    int q;
    cout<<"Enter number of cols of 2nd matrix : ";
    cin>>q;

    int b[p][q];
    cout<<"Enter element of b Matrix : "<<endl;
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin>>b[i][j];
        }
    }

    int res[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Resultant matrix is : "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}