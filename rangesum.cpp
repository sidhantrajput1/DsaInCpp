#include<iostream>
#include<vector>
using namespace std;

vector<int> ra(vector<int>& v, int left, int right) {
    for(int i = left; i < right; i++) {
        v[i] = v[i] + v[i-1];
    }
} 

void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}


int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    prefSum(v, 2, 5);
    display(v);
}