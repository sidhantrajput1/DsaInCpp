#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;


int main () {
    string str = "sidhant is a math teacher. he is a dsa mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp) {
        v.push_back(temp);
    }

    // print vector string
    // for(int i = 0; i < v.size(); i++) {
    //     cout<<v[i]<<" "<<endl;
    // }
    // cout<<endl;
    // sort the vector
    sort(v.begin(), v.end());

    // after sorting print the vector 
    // for(int i = 0; i < v.size(); i++) {
    //     cout<<v[i]<<" "<<endl;
    // }
    // cout<<endl;

    int maxcount = 1;
    int count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) {
            count++;
        } else {
            count = 1;
        }
        maxcount = max(maxcount, count);
    }

    count = 1;
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) {
            count++;
        } else {
            count = 1;
        }
        if(count == maxcount) {
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }

    // cout<<maxcount;
}