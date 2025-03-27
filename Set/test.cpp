#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    int target = 4;

    // set contain unique value
    cout<<s.size()<<endl;
    for(int ele : s) {
        cout<<ele<<" ";
    }
    cout<<endl;
    // find target

    // s.find(target) != s.end() -> target exist
    // s.find(target) == s.end() -> target don't exist

    // s.find() in set and if not found return s.end() which iterators next to the last value

    if(s.find(target) != s.end()) {
        cout<<"Exists";
    } else {
        cout<<"does not exist";
    }
}