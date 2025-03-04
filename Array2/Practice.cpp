
#include<iostream>
#include<vector>
using namespace std;

// 1. Last Occurence
int lastoccurence(vector<int> ans, int val) {
    int lst = 0;
    for(int i = 0; i < ans.size(); i++) {
        if(ans[i] == val) lst = i;
    }
    return lst;
}

// 2. Two Sum (dry run must)
vector<int> twoSum(vector<int> ans, int target) {
    vector<int> v;
    for(int i = 0; i < ans.size(); i++) {
        for(int j = i + 1; j < ans.size(); j++) {
            if(ans[i] + ans[j] == target) {
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return v;
}
// reverse the array // 6. Reverse k step the array
void reverse(vector<int>& v, int left, int right) {
    while(left < right) {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }
}


// print the array
void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


void sortArray(vector<int>& nums) {
    // {1, 0, 1, 0 , 0 , 1, 0, 1, 1, 0};
    // {0, 0, 0, 0, 0, 1, 1, 1, 1, 1}

    int st = 0, end = nums.size() - 1;
    while(st < end) {
        if(nums[st] == 0) st++;
        else if(nums[end] == 1) end--;
        else  { // if (nums[st] == 1 && nums[end] == 0)
            nums[st] = 0;
            nums[end] = 1;
            st++;
            end--;
        }
    }
}

// 8. Move all negtive numbers to begining and postive to end with constant extra space
void move(vector<int>& v) {

    int n = v.size(); 
    int i =0;
    int j = n-1;

    while(i<j) {  //2 -3 -4 5 6-7 
        if(v[i] < 0) i++;
        else if(v[j] >= 0) j--;
        else if(v[i] >= 0 && v[j] < 0) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    return;
}

void partitionArrayAccorToPivot(vector<int>& v, int pivot) {
    int n = v.size();
    vector<int> result(n);

    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] < pivot) {
            result[idx++] = v[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(v[i] >= pivot) {
            result[idx++] = v[i];
        }
    }

    v = result;
}
 


// 5. Rotate the given array 'a' by k steps, where k is postive
void rotateKStepArray(vector<int>& v, int k) {
    k = k % v.size();
    reverse(v, 0 , v.size() - 1);
    reverse(v, 0, k-1);
    reverse(v, k, v.size() - 1);
}

int main() {
    vector<int>  v = {4, 8 , 11, 22 , 10 , 12, 10, 44};
    int pivot = 10;

    partitionArrayAccorToPivot(v, pivot);
    display(v);
}