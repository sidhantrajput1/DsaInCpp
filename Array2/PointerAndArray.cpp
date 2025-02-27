#include<iostream>
using namespace std;


void display(int a[], int size) {
    for(int i = 0; i < size; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
    int arr[5] = {2, 5, 6, 9 ,10};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int* ptr = arr; // giving address
    // cout<<ptr<<endl;

    for(int i = 0; i < 5; i++) {
        cout<<ptr[i]<<" ";
    }
    return 0;
};