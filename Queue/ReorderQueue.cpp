// Reorder the Queue (Interleave 1st half with 2nd half);
// [Do this by using only one stack] Queue is even length
// queue :- 1, 2, 3, 4, 5, 6, 7, 8
// ans :-  1, 5, 2, 6, 3, 7, 4, 8

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q) {
    int n = q.size();
    for(int i = 0; i < n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>& q) {
    stack<int> st;
    while(q.size() > 0) {
        st.push(q.front());
        q.pop();
    }
    while(st.size() > 0) {
        q.push(st.top());
        st.pop();
    }
}

void interleave(queue<int>& q) {
    stack<int> st;
    int n = q.size();
    // first half of element push into stack
    // stack : [4, 3, 2, 1]
    for(int i = 1; i <= n/2; i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // first half of elment push into queue
    // queue : (5, 6, 7, 8, 4, 3, 2, 1)
    while(st.size() > 0) {
        int x = st.top();
        st.pop();
        q.push(x);
    }
    // 2nd half again push into stack [8, 7, 6, 5]
    for(int i = 1; i <= n/2; i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // most important step (interleave one by one)
    // 8 4 7 3 6 2 5 1
    while(st.size() > 0) {
        int x = st.top();
        st.pop();
        q.push(x);
        int y = q.front();
        q.pop();
        q.push(y);
    }
    // reverse the step
    // 1 5 2 6 3 7 4 8
    reverse(q);
}

int main () {
    queue<int> q;
    q.push(1);    
    q.push(2);    
    q.push(3);    
    q.push(4);    
    q.push(5);    
    q.push(6);    
    q.push(7);    
    q.push(8);    
    display(q);
    interleave(q);
    display(q);
}