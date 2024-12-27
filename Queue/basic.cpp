#include<iostream>
#include<queue>
using namespace std;
int main() {
    cout<<"halo Queue"<<endl;
    // push , pop, front -> top , size, empty
    queue<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    cout<<a.front()<<endl;
    cout<<a.size()<<endl;
    a.pop();
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;

    // push() -> insertion happen only at the back/rear -> o(1)
    // pop() -> only happen at the front
    // front() -> we can access the front of the queue
    // back() -> we can access the rear element..

    // overflow -> only happens if we implement the queue via an array if you fill the array
    // underflow -> whenever the queue is empty & try to use these function like front() , back() , pop()
    
}