#include<iostream>
using namespace std;

class Node {
public : 
    int data;
    Node* next;
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};


void display(Node* head) {
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp!=nullptr) {
        temp = temp->next;
        count++;
    }
    return count;
}

void displayRec(Node* head) {
    if (head == nullptr) return;
    cout<<head->data<<" ";
    displayRec(head->next);
}

void displayRev(Node* head) {
    if (head == nullptr) return;
    displayRev(head->next);
    cout<<head->data<<" ";
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

    Node* temp = a;
    cout<<temp<<endl;

    // while (temp != nullptr)
    // {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    cout<<"Print Using Traversing : ";
    display(a);
    cout<<"Print Using recursive method : ";
    displayRec(a);
    cout<<"Size of List is : "<<size(a)<<endl;
    cout<<"Print Reverse of List : ";
    displayRev(a);
}