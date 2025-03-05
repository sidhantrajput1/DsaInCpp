
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {2, 4, 5, 6, 8};
    int m = v1.size();
    int n = v2.size();
    vector<int> res(m+n);

    int i = 0, j = 0, k = 0; 
    // fiiling the element in result vector
    while(i < m  && j < n){
        if(v1[i] < v2[j]) {
            res[k++] = v1[i++];
        } else {
            res[k++] = v2[j++];
        }
    }

    while(i < m){
        res[k++] = v1[i++];
    }
    while(j < n) {
        res[k++] = v2[j];
    }

    for(int i = 0; i < res.size(); i++) {
        cout<<res[i]<<" ";
    }

    return 0;
};