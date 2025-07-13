#include<iostream>
#include<set>

using namespace std;

int add(int n) {
    return n + 1;
}

long long func(long long x) {
    // x = x + 1;

    while (x % 10 == 0) {
        x = x / 10;
    }

    return x;
}

int main () {
    int n = 11;
    // cout<< add(n);
    // define a beautiful function F(x) as follows. Add 1 to the value of x and it the result contains any trailing zero remove them to all . F(11) = 12
    // int resultNum = add(n);

    // string str = to_string(resultNum);
    // char lastChar = str[str.size() - 1];
    // cout<<lastChar;  

    set<long long> visited;
    
    while (visited.find(n) == visited.end()) {
        visited.insert(n);
        n = func(n + 1);
    }

    cout<<visited.size();
    return 0;
}