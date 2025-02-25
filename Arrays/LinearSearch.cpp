#include<iostream>
using namespace std;

int main() {
    // find the element x in the array .  Take array and x as input;
    int arr[] = {1, 2, 3, 5, 7,8 , 9, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x =8;
    // Check Mark
    bool flag = false; // false means - element is not present
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) flag = true;
    }
    if(flag == true) cout<<"Element is present";
    else cout<<"Element is not present";
    // for(int i = 0; i < n-1; i++) {
    //     if(x == arr[i]) {
    //         cout<<i;
    //     }
    // }

    cout<<endl;
    // max element in array
    int mx = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > mx) mx = arr[i];
    }
    cout<<"Max ele : "<<mx<<endl;

    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    cout<<"Min ele : "<<min;
    
    return 0;
};