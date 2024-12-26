#include<iostream>
using namespace std;
class Node { // user defined data type
public : 
  int val;
  Node* next;
  Node(int val) {
    this->val = val;
    this->next = NULL; 
  }
};

class Queue {
    public: 
      Node* head;
      Node* tail;
      int size;
      Queue() {
        head = tail = NULL;
        size = 0;
      }
      void push(int val) {
        Node* temp = new Node(val);
        if(size == 0 )head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
      }
      void pop() {
        if(size == 0) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        size--;
        delete(temp); // wastege nahi hoga after the delete the node
      }
      int front() {
        if(size == 0) {
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
      }

      int back() {
        if(size == 0) {
            cout<<"Queue id  Empty";
            return -1;
        }
        return tail->val;
      }

      void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
      }
      int size1() {
        return size;
      }
      bool empty() {
        if(size == 0) return true;
        else return false;
      }
};

int main () {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(7);
    q.push(10);
    q.display();
    cout<<q.back()<<endl;
    q.display();
    cout<<q.front()<<endl;
    q.pop();
    q.display();
    cout<<q.size1()<<endl;
};


// Advantage of Linked list implemetation of Queue over array implementation
// 1. Unlimited size
// 2. Natural , it's like linked list implemetation
// 3. wastage of size is not there


// Disadvantage of linkedlist implemetation of Queue over array implementation
//  1. For each element we have a Node -> val, next