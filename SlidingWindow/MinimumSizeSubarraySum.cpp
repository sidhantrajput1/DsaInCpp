#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLen = INT_MAX;

    for(int i = 0; i < n; i++) {
        int sum = 0; 
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == target) {
                minLen = min(minLen, j - i + 1);
                break;
            }
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> v = {2,3,1,2,4,3};
    int target = 7;

    int res = minSubArrayLen(target, v);
    cout<<res;
}