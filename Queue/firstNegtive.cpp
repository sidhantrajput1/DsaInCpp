// ! -----------------------------------------------------------------
// first negtive in each window of size k
// n is no of array size int n = arr.size(); 
// no of windows :- n - k + 1;
// arr = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
// ans = {-1, -1, -2, -5, -5, -5, 0, -8}
// brute force solution
// no of operation : (n - k + 1) * k , Time complexcity : O(n * k)
// ! -----------------------------------------------------------------

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    // ans : {-1, -1, -2, -5, -5, -5, 0, -8}
    vector<int> ans;
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(arr[i]<0) q.push(i);
    }
    int i = 0;
    while(i+k < n) {
        while(q.size() > 0 && q.front() < i) q.pop();
        if(q.size() == 0 || q.front() >= i + k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
}
