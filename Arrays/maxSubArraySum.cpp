#include<iostream>
#include<vector>

using namespace std;

int maxSubArrSum(vector<int>& nums){
    int maxSum = nums[0], currMax = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currMax = max(currMax + nums[i], currMax);
        maxSum = max(maxSum, currMax);
    }
    return maxSum;
}

int maxSubArrSum1(vector<int>& nums) {
    int maxSum = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++) {
            currSum += nums[j];
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    // cout<<"Max SubArr Sum is : "<<maxSubArrSum(nums)<<endl;
    cout<<"Max SubArr Sum is : "<<maxSubArrSum1(nums);
}