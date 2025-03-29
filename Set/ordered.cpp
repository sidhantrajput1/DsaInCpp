#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(9);
    s.insert(1);
    s.insert(5);

    for (auto ele : s) {
        cout<<ele<<" ";
    }
}