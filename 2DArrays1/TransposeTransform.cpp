#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // take input in 2d array
    int m;
    cout << "Enter number of row : ";
    cin >> m;

    vector<vector<int>> v(m, vector<int>(m));

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


    for(int i = 0; i < m; i++) {
        for(int j = i+1; j < m; j++) {
            // swaping array of i , j to j, i
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }

    cout<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}