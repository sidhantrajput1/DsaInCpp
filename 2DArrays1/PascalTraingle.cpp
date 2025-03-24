#include<iostream>
#include<vector>

using namespace std;

void display(vector< vector<int> >& v ) {
    for (int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    int m = 5;
    vector<vector<int>> v;

    for(int i = 0; i < m; i++) {
        vector<int> a(i+1);
        v.push_back(a);
    }
    // generate
    for (int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {

            if(j==0 || j == i) 
                v[i][j] = 1;
            else 
                v[i][j] = v[i-1][j] + v[i-1][i-1];
        }
    }

    // print
    for (int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            cout<<v[i][j] << " ";
        }
        cout<<endl;
    }
}