#include<iostream>
#include<unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxLen = 0;

    int i = 0, j = 0;
    int n = s.size();

    unordered_set<char> ans;


    while (j < n) {
        // If the character s[j] is not in the set, add it and update maxLength
        if (ans.find(s[j]) == ans.end()) {
            ans.insert(s[j]);
            maxLen = max(maxLen , j - i + 1);
            j++;
        } else {
            // If s[j] is already in the set, remove s[i] and move the window
            ans.erase(s[i]);
            i++;
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout<<"Longest unique substring length: "<<lengthOfLongestSubstring(s);
}