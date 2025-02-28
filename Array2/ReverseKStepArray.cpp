#include<iostream>
#include<vector>

using namespace std;


// reverse part of array
void reverseArray(vector<int>& v, int left , int right) {
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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    reverseArray(v, 0, 4);
    for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
}