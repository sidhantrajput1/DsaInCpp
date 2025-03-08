#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {-1,0,1,2,-1,-4};
    
    // Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
    for(int i = 0; i < v.size() - 2; i++) {
        for(int j = i + 1; j < v.size() - 1; j++) {
            for(int k = j + 1; k < v.size(); k++) {
                if(v[i] + v[j] + v[k] == 0) {
                    cout<<"( "<<i<<", "<<j<<", "<<k<<" )";
                }
            }
        }
    }
}