#include<iostream>
#include<queue>
using namespace std;

void print(queue<int>& q) {
    for(int i = 1; i <= q.size(); i++) {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void removeEvenIndex(queue<int>& q) {
    int n = q.size();
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) q.pop();
        else {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}


int main() {
    cout<<"halo world"<<endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print(q);
    removeEvenIndex(q);
    print(q);
}