#include<iostream>
#include<vector>
#include<climits>

using namespace std;

// Count the number of elements strictly greater than x.
int strictlygreaterElement(vector<int>& v, int x) {
    int count = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > x) {
            count++;
        }
    }
    return count;
}


// WAP to find the largest three elements in the array.
vector<int> threeLargest(vector<int>& v) {
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] > first) {
            third = second;
            second = first;
            first = v[i];
        } else if (v[i] > second) {
            third = second;
            second = v[i];
        } else if (v[i] > third) {
            third = v[i];
        }
    }

    vector<int> ans;
    ans.push_back(first);
    ans.push_back(second);
    ans.push_back(third);

    return ans;
}

// Check if the given array is sorted or not
bool checkSorted(vector<int>& v) {
    for(int i = 1; i < v.size(); i++ ) {
        if(v[i] < v[i-1]) return false;
    }
    return true;
}

// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
int sumDifference(vector<int>& v) {
    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < v.size(); i++) {
        if(i % 2 == 0) {
            evenSum += v[i]; 
        } else {
            oddSum += v[i];
        }
    }

    return evenSum - oddSum;
}

// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
void changeValue(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        if(i % 2 == 0) {
            v[i] = v[i] + 10; 
        } else {
            v[i] = v[i] * 2;
        }
    }
}

// 

// display the array
void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

// Find the unique number in a given Array where all the elements are being repeated twice with one
int findTheUnque(vector<int>& v) {
    int unique = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            if(v[i] != v[j]) unique = v[i];
        }
    }
    return unique;
}

// If an array arr contains n elements, then check if the given array is a palindrome or not .
bool checkPailndrome(vector<int>& v) {
    int n = v.size();
    for(int i = 0; i < n / 2; i++) {
        if(v[i] != v[n-i-1]) return false;
    }
    return true;;
}

int main() {
    // vector<int> v = {20, 33, 18, 42, 55, 12, 25};
    vector<int> v = {3, 6, 7, 9, 6, 3};
    // cout<<strictlygreaterElement(v, 30)<<endl;
    // vector<int> largest = threeLargest(v);

    // Print the three largest elements
    // cout << "The three largest elements are: ";
    // for(int i = 0; i < largest.size(); i++) {
    //     cout << largest[i] << " ";
    // }
    // cout<<checkSorted(v)<<endl;
    // cout<<sumDifference(v)<<endl;

    // display(v);
    // changeValue(v);
    display(v);
    cout<<findTheUnque(v)<<endl;
    cout<<checkPailndrome(v)<<endl;

    return 0;
}