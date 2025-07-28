#include<iostream>
using namespace std;


int stair(int n) {
    if (n == 1 || n == 2) return n;
    return stair(n-1) + stair(n-2); 
}

int main() {
    cout<<stair(5);
}