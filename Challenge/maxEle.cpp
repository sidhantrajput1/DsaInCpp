#include<iostream>
#include<vector>
#include<climits>
#include<string>

using namespace std;

int main() {
    // reverse string
    // string str = "Sidhant", reverse str = "tnahdis"

    string str = "Sidhant";

    cout<<str<<endl;

    int st = 0;
    int end = str.size() - 1;

    while (st <= end) {
        int temp = str[st];
        str[st] = str[end];
        str[end] = temp;

        st++;
        end--;
    }

    cout<<str;
}