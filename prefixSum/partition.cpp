#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum
    for(int i = 1; i < n; i++) {
        arr[i] += arr[i-1];
    }
    // check if any x exist
    bool flag = false;
    for(int i = 1; i < n; i++) {
        if(2*arr[i] == arr[n-1]) {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Yes it can be partitioned";
    else cout<<"Cannot be partitioned"; 
}