#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int>& nums, int k) {
    int prevSum = 0, n = nums.size();
    for (int i = 0; i < k; i++) {
        prevSum += nums[i];
    }

    int i = 1, j = k;
    int maxSum = prevSum;

    while(j < n) {
        prevSum = prevSum + nums[j] - nums[i-1];

        // if (maxSum < prevSum) {
        //     maxSum = prevSum;
        // }
        maxSum = max(maxSum, prevSum);
        i++;
        j++;
    }

    return maxSum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    cout<<sum(nums, 3);
}