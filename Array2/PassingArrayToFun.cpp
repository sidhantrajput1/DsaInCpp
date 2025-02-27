#include<iostream>
using namespace std;


void display(int a[], int size) {
    for(int i = 0; i < size; i++) cout<<a[i]<<" ";
    cout<<endl;
}

void change(int b[], int size) {
    b[0] = 100;
}
int main() {
    int arr[5] = {2, 5, 6, 9 ,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Access the elements of array in another function
    // uodation, pass by value / refrence ? -> array is pass by refrnece
    display(arr, size);
    change(arr, size);
    display(arr, size);
}