#include<iostream>
#include<unordered_map>
using namespace std;

int main () {
    unordered_map<string , int> mp;

    pair<string, int> p1;
    p1.first = "Sidhant";
    p1.second = 76;

    // pair<string , int > p2;
    // p2.first = "Kartik";
    // p2.second = 22;

    // pair<string, int> p3;
    // p3.first = "Ranjan";
    // p3.second = 43;

    mp["Gungun"] = 36;
    mp["meenu"] = 42;

    mp.insert(p1);
    

    // for (pair<string, int> p : mp) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    for (auto p : mp) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<endl;
    mp.erase("Sidhant");

    for (auto p : mp) {
        cout<<p.first<<" "<<p.second<<endl;
    }
}