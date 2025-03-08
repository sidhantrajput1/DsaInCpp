#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            cout << "Even: " << i << "\n";
        } else if (i % 3 == 0) {
            cout << "Multiple of 3: " << i << "\n";
        } else {
            cout << "Odd: " << i << "\n";
        }
    }
    return 0;
}
