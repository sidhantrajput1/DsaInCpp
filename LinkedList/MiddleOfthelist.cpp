#include<iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};

int length(Node* head) {
    Node* temp = head;
    int size = 0;
    while(temp != nullptr) {
        temp = temp->next;
        size++;
    }
    return size;
}

int middleofthelist(Node* head) {
    Node* temp = head;

    int mid = length(head) / 2;
    int ans = -1;
    for (int i = 0; i < mid; i++) {
        temp = temp->next;
    }
    ans = temp->data;

    return ans;
}
Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr || fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


void display(Node* head) {
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
    
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    // cout<<middleofthelist(a)<<endl;


    // cout<< 6/2;

    cout<<middleNode(a);
}