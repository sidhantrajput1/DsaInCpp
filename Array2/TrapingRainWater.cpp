
#include<iostream>
#include<vector>
using namespace std;

vector<int> prefSum(vector<int>& v) {
    for(int i = 1; i < v.size(); i++) {
        v[i] = v[i] + v[i-1];
    }
    return v;
}

vector<int> suffixSum(vector<int>& v) {
    for(int i = v.size() - 2; i >= 0; i--) {
        v[i] = v[i] + v[i+1];
    } 
    return v;
}

void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int trap(vector<int>& v) {
    vector<int> pref = prefSum(v);
    vector<int> suff = suffixSum(v);
    int num1 = pref[pref.size() - 1];
    cout<<num1<<endl;
    int num2 = suff[0];
    return max(num1, num2);
}

int main() {
    vector<int> v = {3, 0, 1, 0, 4, 0, 2};
    // prefSum(v);
    // display(v);
    // suffixSum(v);
    // display(v);
    // vector<int> prefAns = prefSum(v);
    // display(prefAns);
    cout<<trap(v)
    return 0;
};  