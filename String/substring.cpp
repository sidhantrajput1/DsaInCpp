#include<iostream>
#include<climits>
#include<string>
using namespace std;

int main() {
    string str = "abcdefgh";
    // str.substr(idx, length)
    // cout<<str.substr(2, 4);

    int len = str.size();
    cout<<str.substr(len/2);
    return 0;
}