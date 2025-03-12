#include<iostream>
#include<climits>
#include<string>
using namespace std;

int main() {
    // string str = "Sidhantoo";

    // int count = 0;
    // int i = 0;
    // while (str[i] != '\0') {
    //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
    //         count++;
    //     }
    //     i++;
    // }
    // cout<<count;

    // update string value even index
    string str = "Sidhant";

    cout<<str<<endl;

    for(int i = 0; i < str.size(); i++) {
        if(i % 2 == 0) str[i] = 'a';
    }

    cout<<str;
    return 0;
}