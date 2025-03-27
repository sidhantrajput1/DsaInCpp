#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> nums= {-3,-2,-1,0,0,1,2};

    // write a program to find the last negtive idx in array
    
    int low = 0;
    int high = nums.size() - 1;

    int firstNeg = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < 0) {
            firstNeg = mid;
            low = mid + 1;
        } 
        else high = mid - 1;
    }

    cout<<firstNeg;
}