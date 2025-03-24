#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main () {
    string s = "abcabcbb";

    int i = 0, j = 0;
    int n = s.size();
    int maxLen = 0;

    unordered_set<char> ans;

    while (j < n) {
        // if the character s[j] is not in the set, add it and update it
        if(ans.find(s[j]) == ans.end()) {
            ans.insert(s[j]);
            maxLen = max(maxLen, j - i + 1);
            j++;
        } 
        // if the character s[j] is in the set , the delete the element
        else {
            ans.erase(s[i]);
            i++;
        }
    }

    cout<<maxLen;
}