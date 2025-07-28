#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int data)
    {
        this->val = data;
        this->next = nullptr;
    }
};

class LinkedList
{ /*user defined data type */
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList()
    {
        head = tail = nullptr;
        size = 0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtBegin(int val) {
        Node* temp = new Node(val);

        if (size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val) {
        if (idx < 0 || idx > size) {
            cout<<"Invalid Index"<<endl;
            return;
        }

        else if (idx == 0) 
        {
            insertAtBegin(val);
            return;
        }
        else if (idx == size) {
            insertAtEnd(val);
            return;
        }

        else {
            Node* newNode = new Node(val);
            Node* temp = head;

            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }


    int getAtIdx(int idx) {
        // if (idx == 0) return head->val;
        if (idx < 0 || idx >= size) {
            cout<<"Invalid Index";
            return -1;
        }

        else if (idx == 0) return head->val;
        else if (idx == size-1) return tail->val;

        else {
            Node* temp = head;
            for (int i = 1; i <= idx; i++) temp = temp->next;
            return temp->val;
        }
    }

    void deleteAtHead() {
        if (size == 0) {
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail() {
        if (size == 0) {
            cout<<"List is empty!";
            return;
        }

        Node* temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = nullptr;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx) {
        if (size == 0) {
            cout<<"List is empty";
            return;
        }
        else if (idx < 0 || idx >= size) {
            cout<<"Invalid Index";
            return;
        }
        else if (idx == 0) return deleteAtHead();
        else if (idx == size - 1) deleteAtTail();

        else {
            Node* temp = head;
            for (int i = 1; i < idx - 1; i++) temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);

    ll.display();

    ll.insertAtBegin(50);

    ll.display();

    ll.insertAtIdx(2, 70);
    ll.display();

    // cout<<endl;
    // cout<<ll.getAtIdx(1)<<endl;
    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIdx(3);
    ll.display();
}