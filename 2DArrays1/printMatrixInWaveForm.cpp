#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& v, int left, int right) {
    while(left < right) {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++; right--;
    }
}

int main() {
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;

    int n;
    cout<<"Enter number of cols : ";
    cin>>n;

    int a[m][n];
    cout<<"Enter element of matrix : ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                cout<<a[i][j]<<" ";
            }
        } else {
            for(int j = n - 1; j >= 0; j--) {
                cout<<a[i][j]<<" ";
            }
        }
        // cout<<endl;
    }
}