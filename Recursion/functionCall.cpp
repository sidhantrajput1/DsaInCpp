#include<iostream>
using namespace std;


// int Sum(int a, int b) {
//     return a + b;
// }

void greet(int n) {
    if (n == 0) return;
    cout<<"Heloo Sidhant"<<endl;
    greet(n-1);
}

int factorial(int n) {
    // base case
    if (n == 0 || n == 1) return 1;
    // recursive call
    return n * factorial(n-1);
}


// void printNtoOne(int n) {
//     if (n == 0) return;
//     // int res = printNtoOne(n-1);
//     cout<<n<<" ";
//     printNtoOne(n-1);
// }

// print 1 to n
void print(int i, int n) {
    if (i > n) return;
    cout<<i<<" ";
    print(i+1, n);
}

void print(int n) {
    if (n == 0) return;
    print(n-1);
    cout<<n<<" ";
}

int main() {
    // cout<<Sum(5, 6);
    // greet(10);
    // cout<<"Factorial Is : "<<factorial(5);
    // printNtoOne(6);
    print(10);
}