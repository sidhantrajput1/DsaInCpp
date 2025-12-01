#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int operateToken(int a, int b, string token) {
    if (token == "+") return a + b;
    if (token == "-") return a - b;
    if (token == "*") return (long)a * (long)b;
    if (token == "/") return a / b;
     return -1;
    // return token == "+" ? a + b : token == "-" ? a - b : token == "*" ? a * b : a / b;
}

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    
    for (string &token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int a = st.top(); 
            st.pop();

            int b = st.top(); 
            st.pop();

            int result = operateToken(a, b, token);

            st.push(result);
        } else {
            st.push(stoi(token));
        }
    }

    return st.top();
}

int main() {
    vector<string> tokens  = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout<<evalRPN(tokens);
}