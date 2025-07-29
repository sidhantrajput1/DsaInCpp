// Find 3rd Largest Number

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int thirdLargest(vector<int>& nums) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {

        if (max1 == nums[i] || max2 == nums[i] || max3 == nums[i]) continue;

        if (max1 < nums[i]) {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if (max2 < nums[i] && max1 <= nums[i]) {
            max3 = max2;
            max2 = nums[i];
        } else if (max3 < nums[i] && max2 <= nums[i]){
            max3 = nums[i];
        }

    }
   return (max3 == INT_MIN) ? -1 : max3;
}

int main() {
    vector<int> nums = {3, 1, 4, 7, 8, 9, 2, 11};
    cout<<"Third Max is : "<<thirdLargest(nums);
}