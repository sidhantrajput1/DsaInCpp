#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    
    vector<int> suffixSum(v.size());

    suffixSum[v.size()-1] = v[v.size()-1];
    for(int i = v.size()-2; i >= 0; i--) {
        suffixSum[i] = v[i] + suffixSum[i+1]; 
    }

    for(int i = 0; i < suffixSum.size(); i++) {
        cout<<suffixSum[i]<<" ";
    }
    cout<<endl;

    // suffix product
    int n = v.size();
    vector<int> suffixProd(n);
    suffixProd[v.size()-1] = v[v.size()-1];
    for(int i = n - 2; i >= 0; i--) {
        suffixProd[i] = v[i] * suffixProd[i+1];
    }

    for(int i = 0; i < suffixSum.size(); i++) {
        cout<<suffixProd[i]<<" ";
    }
    
}