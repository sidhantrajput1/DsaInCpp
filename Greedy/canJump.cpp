#include<iostream>
#include<vector>

using namespace std;

// leetcode 55

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int maxIdx = 0;
    for ( int i = 0; i < n; i++) {
        if (i > maxIdx) return false;
        maxIdx = max(maxIdx, i + nums[i]);
    }
    return true;
}

int canJumpII(vector<int>& nums) {
    int jumps = 0, farthest = 0, currentEnd = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        farthest = max(farthest, i + nums[i]);

        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;
        }
    }
    return jumps;
}


int main() {
    vector<int> nums = {2,3,1,1,4,5};
    cout<<canJump(nums);
}