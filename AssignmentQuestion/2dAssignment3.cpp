#include<iostream>
#include<vector>

using namespace std;

// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

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

    int l1 = 1, r1 = 2 , l2 = 3 , r2 = 3;

    // Ensure l1 <= l2 and r1 <= r2 for valid ranges
    if (l1 < 0 || l2 >= m || r1 < 0 || r2 >= n) {
        cout << "Invalid coordinates!" << endl;
        return 0;
    }

    int sum = 0;
    for(int i = l1; i <= l2; i++) {
        for(int j = r1; j <= r2; j++) {
            sum += a[i][j];
        }
        cout<<endl;
    }

    cout<<"Sum is : "<<sum<<endl;
}