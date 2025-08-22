#include <iostream>
#include <vector>
using namespace std;

void subSeq(int idx, vector<int>& nums, vector<int>& current, 
vector<vector<int>>& result) {
    if (idx == nums.size()) {
        result.push_back(current);
        return;
    }
    
    current.push_back(nums[idx]);
    subSeq(idx + 1, nums, current, result);
    
    current.pop_back();
    subSeq(idx + 1, nums, current, result);
}

int main() {
    vector<int> nums = {3, 1, 2};
    vector<vector<int> > result;
    vector<int> current;
    
    subSeq(0, nums, current, result);
    
    for (auto subSet : result) {
        cout<<"[";
        for (int num : subSet) cout<<num<<" ";
        cout<<"]" <<endl;
    }
    return 0;
}