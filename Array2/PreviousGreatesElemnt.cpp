#include<iostream>
#include<vector>
using namespace std;

// void previousGreaterElemnt(vector<int>& v) {
//     vector<int> result(v.size());
//     result[0] = -1;

//     for(int i = 1; i < v.size(); i++) {
//         int val = 0;
//         for(int j = i-1; j>=0; j--) {
//             if(v[i] < v[j]) {
//                 val = v[j];
//                 break;
//             }
//         }
//         result[i] = val;
//     }
//     v = result;
// }

int previousGreaterElemnt(vector<int>& v) {
    // v[0] = -1;
    int mx = v[0];
    for(int i = 0; i < v.size(); i++) {
        // v[i] = mx;
        if(mx < v[i]) mx = v[i];
    }
    return mx;
}

// void nextGreater(vector<int>& v) {
//     int mx = 0;
//     v[v.size()-1] = -1;
//     for(int i = 0)
// }

void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1}; // output -> -1, 10, 4, -1, -1, 40, 40
    // previousGreaterElemnt(v);
    cout<<previousGreaterElemnt(v);
    // display(v);
}