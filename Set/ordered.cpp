#include<iostream>
#include<set>
#include<map>

using namespace std;

int main() {

    // ordered set
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(9);
    s.insert(1);
    s.insert(5);

    for (auto ele : s) {
        cout<<ele<<" ";
    }

    cout<<endl;

    // ordered map 
    map<string, int> m;
    
    m["Sidhant"] = 16;
    m["Rohit"] = 14;
    m["Shivangi"] = 78;
    m["Sidhant"] = 17;

    for (auto ele : m) {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}