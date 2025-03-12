#include<iostream>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    // string str = "I am Software Developer";
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // int len = str.size();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string str = "Sidhant";
    // str.pop_back();
    // cout<<str;

    // + Operator
    // string s = "abc";
    // cout<<s<<endl;
    // string t = "def";
    // s = s + t + "xyz";
    // cout<<s<<endl;

    // Reverse built in function
    // string str = "sidhant";
    // cout<<str<<endl;
    // reverse(str.begin(), str.end());
    // cout<<str<<endl;

    // Reverse the first half of the string
    string str = "sidhantt";
    cout<<str<<endl;
    reverse(str.begin()+ 0, str.begin() + 4);
    cout<<str<<endl;

    return 0;
}