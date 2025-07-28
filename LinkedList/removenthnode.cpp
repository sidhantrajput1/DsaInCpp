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

Node* removeNthFromEnd(Node* head, int n) {
    Node* temp = head;
    int len = length(head);

    if (n==len) {
        head = head->next; 
        return head;
    }

    for (int i = 1; i < len - n; i++) {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
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
    Node* ans =  removeNthFromEnd(a, 30);
    display(ans);
}