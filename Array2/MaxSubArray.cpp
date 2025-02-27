#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v) {
    for(int i =0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int maxSubArray(vector<int>& nums) {
    int currSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        currSum = currSum + nums[i];
        cout<<currSum<<" ";
        // currSum = max(currSum, nums[i]);
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int maxAbsoluteSum(vector<int>& nums) {
    int currMaxSum = nums[0];
    int maxSum = nums[0];

    int currMinSum = nums[0];
    int minSum = nums[0];
    
    for(int i = 1; i < nums.size(); i++) {
        currMaxSum = max(currMaxSum + nums[i], nums[i]);
        maxSum = max(maxSum, currMaxSum);

        currMinSum = min(currMinSum + nums[i], nums[i]);
        minSum = min(minSum, currMinSum);
    }
    return max(abs(minSum), abs(maxSum));
}

int subarraySum(vector<int>& v, int k) {
    int n = v.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += v[j];
            if(sum == k) count++;
        }
    } 
    return count;
}

int main() {
    vector<int> v = {1, 2, 3};
    int k = 3;
    // display(v);
    // cout<<maxSubArray(v);
    // cout<<maxAbsoluteSum(v);
    cout<<subarraySum(v,k);
}