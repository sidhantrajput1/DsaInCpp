#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m;
    cout << "Enter number of rows : ";
    cin >> m;

    int n;
    cout << "Enter number of cols : ";
    cin >> n;

    // Declare 2D vector
    vector<vector<int>> a(m, vector<int>(n));

    // Input matrix
    cout << "Enter element of matrix : " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << endl;

    // Print matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Spiral print
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    int totalEle = 0;

    cout << "Spiral order: ";
    while (totalEle < m * n) {
        // right
        for (int j = minc; j <= maxc && totalEle < m * n; j++) {
            cout << a[minr][j] << " ";
            totalEle++;
        }
        minr++;

        // down
        for (int i = minr; i <= maxr && totalEle < m * n; i++) {
            cout << a[i][maxc] << " ";
            totalEle++;
        }
        maxc--;

        // left
        for (int j = maxc; j >= minc && totalEle < m * n; j--) {
            cout << a[maxr][j] << " ";
            totalEle++;
        }
        maxr--;

        // up
        for (int i = maxr; i >= minr && totalEle < m * n; i--) {
            cout << a[i][minc] << " ";
            totalEle++;
        }
        minc++;
    }

    return 0;
}
