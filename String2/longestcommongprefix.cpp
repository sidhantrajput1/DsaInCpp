#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    // ["flower","flow","flight"]
    vector<string> s;
    s.push_back("flower");
    s.push_back("flow");
    s.push_back("flight");

    for(int i = 0; i < s.size(); i++) {
        cout<<s[i]<<" ";
    }

    cout<<endl;

    sort(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++) {
        cout<<s[i]<<" "; 
    }

    cout<<endl;
    string b = "a" + "b";
    cout<<b<<endl;
}