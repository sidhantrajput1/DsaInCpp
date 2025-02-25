#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 7,8 , 9, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int mx = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > mx) mx = arr[i];
    }
    cout<<"Max ele : "<<mx<<endl;

    int secMx = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(mx != arr[i] && arr[i] > secMx) secMx = arr[i];
    }
    cout<<"Second Largest Ele : "<<secMx;
    return 0;
};