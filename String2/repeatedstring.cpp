#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// find repated most repeated char in string
// like -> saraaas , most repeated char is a;

int main () {
    // string s = "saraaasrrrrrr";
    // int n = s.length(); // s.size();
    // int mx = 0;

    // for (int i = 0; i < n; i++) {
    //     char ch = s[i];
    //     int count = 0;
    //     for(int j = i + 1; j < n; j++) {
    //         if(s[j] == s[i]) count++;
    //     }
    //     if(mx < count) mx = count;
    // }

    // for(int i = 0; i < n; i++) {
    //     char ch = s[i];
    //     int count = 0;
    //     for(int j = i + 1; j < n; j++) {
    //         if(s[j] == s[i]) count++;
    //     }
    //     if(count == mx) {
    //         cout<<ch<<"->"<<mx<<endl;
    //     }
    // }
    // cout<<mx;

    string s = "leetcode";

    vector<int> arr(26, 0);
    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        int ascii = (int)ch;
        int index = ascii - 97;
        arr[index]++;
    }

    int mx = arr[0];

    for(int i = 0; i < 26; i++) {
        if(arr[i] > mx) mx = arr[i];
    }

    for(int i = 0;i < 26; i++) {
        if(arr[i] == mx) {
            char ch = (char)(i + 97); 
            cout<<ch<<" -> "<<mx<<endl;
        }
    }
}