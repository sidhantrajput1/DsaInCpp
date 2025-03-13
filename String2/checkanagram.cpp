#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main () {
    string s = "anagram";
    string t = "nagaram";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) {
        cout<<"Yes , it is anagram string";
    } else {
        cout<<"oops!😒 , it is not anagram string";
    }
}