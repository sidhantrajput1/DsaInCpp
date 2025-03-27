#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nums= {-3,-2,-1,0,0,1,2};

    // write a program to find the first postive idx
    // apply binary search algo

    int low = 0;
    int high = nums.size() - 1;

    int firstPos = nums.size();

    while (low < high) {
        
        int mid = low + (high - low) / 2;

        if (nums[mid] > 0) {
            firstPos = mid;
            high = mid - 1;
        } 
        else low = mid + 1;
    }

    cout<<firstPos;
}