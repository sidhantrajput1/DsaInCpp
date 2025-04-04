#include<iostream>
#include<vector>

using namespace std;

int main () {
    vector<int> nums = {1,2,1,3,5,6,4};
    // find the peak element of array
    int n = nums.size();
    int st = 0, end = n - 1;

    int idx = 0;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid + 1]) {
            idx = mid;
            break;
        } else if (nums[mid] < nums[mid+1]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout<<"Peak Element is : "<<idx;
}