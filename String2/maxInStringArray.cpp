#include<iostream>
#include<string>
using namespace std;

int main() {
    string arr[] = {"0012", "345", "000032", "6542", "0000", "234"};
    int max = stoi(arr[0]);

    for(int i = 1; i < 6; i++) {
        int x = stoi(arr[i]);
        if(x > max) max = x;
    }
    cout<<max;
}