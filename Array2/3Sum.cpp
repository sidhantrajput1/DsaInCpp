#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main() {
    vector<int> v = {-1,0,1,2,-1,-4};
    
    sort(v.begin(), v.end());
    // display(v);
    int n = v.size();

    vector<vector<int>> ans;
    for(int i = 0; i < n; i++) {
        if(i > 0 && v[i] == v[i-1]) continue; 

        int j = i + 1, k = n - 1;
        while(j < k) {
            int sum = v[i] + v[j] + v[k];

            if (sum < 0) {
                j++;
            } else if (sum > 0) {
                k--;
            } else {
                ans.push_back({v[i], v[j], v[k]});
                j++; k--;

                while(j < k && v[j] == v[j-1]) j++; 
                while(j < k && v[k] == v[k-1]) k--; 
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}