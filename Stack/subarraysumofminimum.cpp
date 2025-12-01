#include <iostream>
#include <vector>

using namespace std;

void printAllSubArrays(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "[";
            for (int k = i; k <= j; k++) {
                cout<<nums[k]<<" ";
            }
            cout<< "]";
        }
    }
}

void subarrays(vector<int> &nums, int i) {
    if (i == nums.size() - 1) return;
    
     
}

int main()
{
    vector<int> nums = {3, 1, 2, 4};

    printAllSubArrays(nums);
}