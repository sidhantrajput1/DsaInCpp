#include<iostream>
using namespace std;

// using recursive find the factorial
int factorial(int n) {
    if(n==1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

// using itrative function
int fact(int n) {
    int ans = 1;
    for(int i = 1; i <= n ; i++) ans = ans * i;
    return ans; 
}

int main() {
    cout<<factorial(5)<<endl;
    cout<<fact(4)<<endl;
}