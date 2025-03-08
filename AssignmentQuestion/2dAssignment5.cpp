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

    cout<<"Matrix is : "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int maxSum = 0;
    int rowIndex = -1;

    // Iterate through each row to calculate the sum
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }

        // Update the maxSum and rowIndex if a new maximum is found
        if (rowSum > maxSum) {
            maxSum = rowSum;
            rowIndex = i + 1;  // row index starts from 1 for the result
        }
    }

    cout<<maxSum;

}