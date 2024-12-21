#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void print(queue<int>& a) {
    int n = a.size();
    for(int i = 1; i <= n ; i++) {
        int x = a.front();
        cout<<x<<" ";
        a.pop();
        a.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>& a) {
    stack<int> st;
    // empty the Queue into Stack 
    while(a.size() > 0) {
        int x = a.front();
        a.pop();
        st.push(x);
    }
    // empty the Stack into Queue 
    while(st.size() > 0) {
        int x = st.top();
        st.pop();
        a.push(x);
    }
}

int main() {
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    print(a);
    reverse(a);
    print(a);
}