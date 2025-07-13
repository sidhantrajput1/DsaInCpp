#include<iostream>
using namespace std;

// You are given an integer n. On each step, you may subtract one of the digits from the number.
// How many steps are required to make the number equal to 0?

int main() {
    int n = 27;
    int count = 0;
    while (n > 0) {
        int temp = n, maxDigit = 0;
        while (temp > 0) {
            maxDigit = max(maxDigit, temp % 10);
            temp /= 10;
        }
        n = n - maxDigit;
        count++;
    }

    cout<<count;
}