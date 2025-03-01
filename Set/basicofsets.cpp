#include<iostream>
#include<unordered_set>
using namespace std ;

int main() {
    unordered_set<int> s;
    // its always take unique element
    // set store unique element s.insert(1) , s.insert(1) , it only take one value
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    // for delete the elemt 
    // s.erase(2);
    // cout<<s.size()<<endl;

    int target = 40;
    if(s.find(target) != s.end()) cout<<"Exists";
    else cout<<"does not Exists";
    cout<<endl;

    for(int num : s) {
        cout<<num<<" ";
    } 

}