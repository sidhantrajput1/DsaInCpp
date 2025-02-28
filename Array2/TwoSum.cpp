#include<iostream>
#include<vector>

using namespace std;


int main() {
    vector<int> v = {1, 2, 3, 4, 6};
    int target = 5;
    for(int i = 0; i <= v.size() - 2; i++) {
        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] + v[j]== target) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        } 
    }

}