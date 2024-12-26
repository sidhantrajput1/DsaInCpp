#include<iostream>
using namespace std;
class Node {
public: 
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(4);
    Node* d = new Node(8);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* h = a;
    delete(h);
    cout<<b<<endl;
}