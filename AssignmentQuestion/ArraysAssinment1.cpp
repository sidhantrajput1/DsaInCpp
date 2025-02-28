
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Calculate the product of all the elements in the given array.
int product(vector<int>& v) {
    int mt = 1;
    for(int i = 0; i < v.size(); i++) {
        mt *= v[i];
    }
    return mt;
}

// largest element of array
int max(vector<int>& v) {
    int mx = v[0];
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > mx) mx = v[i];
    }
    return mx;
}

// Find the second largest element in the given Array.
int secLargest(vector<int>& v) {
    int mx = max(v);
    int secmx = INT_MIN;
    for(int i = 0; i < v.size(); i++){
        if(mx != v[i] && v[i] > secmx) secmx = v[i];
    }
    return secmx;
}

// Find the second largest element in the given Array in one pass.
int secMax(vector<int>& v) {
    int first = INT_MIN;
    int seccond = INT_MIN;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] > first) {
            seccond = first;
            first = v[i];
        } else if (v[i] > seccond) {
            seccond = v[i];
        }
    }

    return seccond;
}

// Find the minimum value out of all elements in the array.
int minimum(vector<int>& v) {
    int min = INT_MAX;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] < min) min = v[i];
    }
    return min;
}

// Given an array, predict if the array contains duplicates or not.
bool duplicate(vector<int>& v) {
    for(int i = 1; i < v.size(); i++) {
        if(v[i] == v[i-1]) return true;
    }
    return false;
}

// WAP to find the smallest missing positive element in the sorted Array that contains only
// int missingNumber(vector<int>& v) {
//     int sum = 0;
//     for(int i  = 0; i < v.size(); i++) {
//         sum += v[i];
//     }

//     int n = v.size() + 1;
//     int actucalSum = n * (n + 1) /2;
//     return actucalSum - sum;
// }

int missingNumber(vector<int>& v) {
    int missing = 1;
    for(int i  = 0; i < v.size(); i++) {
        if(v[i] == missing) {
            missing++;
        } 
        else if (v[i] > i) {
            break;
        }
    }

    return missing;
}



int main() {
    vector<int> v = {1, 2, 3, 5, 6, 7};
    // cout<<product(v)<<endl;
    // cout<<max(v)<<endl;
    // cout<<secLargest(v)<<endl;
    // cout<<secMax(v)<<endl;
    // cout<<minimum(v)<<endl;
    // cout<<duplicate(v);
    cout<<missingNumber(v);
}