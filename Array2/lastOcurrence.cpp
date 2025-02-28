#include<iostream>
#include<vector>

using namespace std;

// int lastoccurence(vector<int>& a, int val) {
//     int lst = 0;
//     for(int i = 0; i < a.size(); i++) {
//         if(a[i] == val) {
//             lst = i;
//         }
//     }
//     return lst;
// }
int lastoccurence(vector<int>& a, int val) {
    int lst = -1;
    for(int i = a.size() - 1; i >= 0; i--) {
        if(a[i] == val) {
            lst = i;
            break;
        }
    }
    return lst;
}

int main() {
    vector<int> v = {1, 2, 3, 2, 2, 2, 5, 9};
    cout<<lastoccurence(v, 2);
}