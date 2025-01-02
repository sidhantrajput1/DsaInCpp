// program to find the nth fibonacci series and number
// 0 1 1 2 3 5 8 13 21 34
// sum of privious two number
// 5 + 8 = 13, 1 + 2 = 3 like
// 2 terms sum of (n-1)th term and (n-2)th term

#include<iostream>
using namespace std;

int fibo(int n) {
    if(n == 0 || n == 1) return n;
    int ans = fibo(n-1) + (n-2);
    return ans;
} 

void fibonacci(int n ){
    int first = 0, second = 1;
    if(n >= 0) {
        cout<<first<<" ";
    }
    if(n >= 2) {
        cout<<second<<" ";