#include<iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for(int i = 2; i <= x; i++) f *= i;
    return f;
}

int combination(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void pascal(int n) {
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << combination(i, j) << " "; // ICj
        }
        cout << endl;
    }
}

int main() {
    cout<<fact(5)<<endl;
    cout<<combination(5, 2)<<endl;
    pascal(6);
    return 0;
    
}