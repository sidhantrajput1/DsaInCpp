#include<iostream>
#include<vector>

using namespace std;

int main() {
    int m;
    cout<<"Enter number of rows for 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter number of cols for 1st Matrix : ";
    cin>>n;

    int p;
    cout<<"Enter number of rows for 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter number of cols for 2nd Matrix : ";
    cin>>q;

    if (n == p) {
        // 1st matrix
        int a[m][n];
        cout<<"Enter 1st matrix element : "<<endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin>>a[i][j];
            }
        }

        // 2nd matrix
        int b[p][q];
        cout<<"Enter 2nd Matrix element : "<<endl;
        for(int i = 0; i < p; i++) {
            for(int k = 0; k < q; k++) {
                cin>>b[i][k];
            }
        }

        // resultant matrix 
        int res[m][q];
        cout<<"Multiplication of matrix is : "<<endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                // res[i][j] = 0;
                res[i][j] = 0;
                for(int k = 0; k < p; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        } 

        // Print the multiplication matrix
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }


    } else { // n!=p
        cout<<"The Matrices can not be multiplied";
    }
}