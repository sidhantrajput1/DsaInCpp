#include<iostream>
using namespace std;

void swap(int &x , int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    // int x = 122;
    // int* p = &x;
    // x = 200;
    // *p = 100;
    // cout<<*p;
    // cout<<x;
    // int a = 10, b = 20;
    // int* p1 = &a;
    // int* p2 = &b;
    // cout<<*p1 + *p2;
    // swap(a, b);
    // cout<<a<<" "<<b;
    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl;
    // x++;
    ++x;
    cout<<*ptr;
}