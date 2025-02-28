#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int>& v) {
    int left = 0, right = v.size() - 1;

    while (left < right)
    {
        int temp = v[left];
        v[left] = v[right];
        v[right] = temp;
        left++;
        right--;
    }
    
}


int main() {
    vector<int> v = {1, 2, 3, 4, 6};
    for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
    reverseArray(v);
    vector<int> v2;
    for(int i = 0; i < v.size(); i++) v2.push_back(v[i]);
    cout<<endl;
    for(int i = 0; i < v2.size(); i++) cout<<v2[i]<<" ";
}