#include <iostream>
#include <string>
#include <climits>
#include <stack>

using namespace std;

void reverse(string &str, int st, int end)  {
    while(st <= end) {
        int temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        st++; end--;
    }
}

string removeAdjacentChar(string &str)
{
    stack<char> st;

    for (int i = 0; i < str.size(); i++) {
        if (!st.empty() && st.top() == str[i]) {
            st.pop();
        } else {
            st.push(str[i]);
        }
    }

    string s = "";

    while(!st.empty()) {
        s.push_back(st.top());
        st.pop();
    }

    // reverse()
    reverse(s, 0, s.size() - 1);

    return s;
}

int main()
{
    string s = "abbaca";
    cout<<removeAdjacentChar(s);
    // output : ca
}