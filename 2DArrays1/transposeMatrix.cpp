#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // take input in 2d array
    int m;
    cout << "Enter number of row : ";
    cin >> m;

    int n;
    cout << "Enter number of column : ";
    cin >> n;

    vector<vector<int>> v(m, vector<int>(n));

    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cin >> v[i][j];
        }
    }

    cout << endl;
    // Printing
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    // print transpose matric
    cout<<endl;

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
}