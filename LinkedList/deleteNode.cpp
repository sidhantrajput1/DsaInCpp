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


Node* deleteNode(Node* head, Node* target) {
    if (head == target) {
        // head = head->next;
        return head->next;
    }
    Node* temp = head;
    while(temp->next != target) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    cout<<temp<<" "<<temp->next<<endl;
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

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    Node* head = a;
    display(head);
    head = deleteNode(head, a);
    display(head);
}