#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int arr[] = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int k = 3;
    // int maxSum = INT_MIN;
    // for(int i = 0; i < n - k; i++) {
    //     int sum = 0;
    //     for(int j = i; j < i+k; j++) {
    //         sum += arr[j];
    //     }
    //     maxSum = max(maxSum, sum);
    // }

    // int k = 3;
    // int maxSum = INT_MIN;
    // int maxIdx = -1;

    // for(int i = 0; i < n - k; i++) {
    //     int sum = 0;
    //     for(int j = i; j < i+k; j++) {
    //         sum += arr[j];
    //     }
    //     if(maxSum<sum) {
    //         maxSum = sum;
    //         maxIdx = i;
    //     }
    // }


    int k = 4;
    int maxSum = INT_MIN;
    int maxIdx = 0;

    int prevSum = 0;
    for(int i = 0; i < k; i++) {
        prevSum += arr[i];
    }

    maxSum = prevSum;
    // sliding window techniques
    int i = 1;
    int j = k;
    while(j < n) {
        // int currSum = prevSum + arr[j] - arr[i-1];
        prevSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < prevSum) {
            maxSum = prevSum;
            maxIdx = i;
        }
        // prevSum = currSum;
        i++;
        j++;
    }

    cout<<maxSum<<endl;
    // cout<<maxIdx<<endl;
}