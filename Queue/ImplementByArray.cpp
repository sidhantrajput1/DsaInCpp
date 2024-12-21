#include<iostream>
#include<queue>
using namespace std;

class Queue {
    public: 
        // f -> front , b -> back
        int f;
        int b;
        int arr[5];
        Queue(){
            f = 0;
            b = 0;
        }
        void push(int val) {
            if(b==5) {
                cout<<"Queue is full"<<endl;
                return;
            }
            arr[b] = val;
            b++; 
        }
        void pop() {
            if(f-b==0) {
                cout<<"Queue is empty";
                return;
            } 
            f++;
        }
        int front() {
            if(f-b==0) {
                cout<<"Queue is empty";
                return -1;
            } 
            return arr[f];
        }
        int back() {
            if(f-b==0) {
                cout<<"Queue is empty";
                return -1;
            } 
            return arr[b];
        }
        int size() {
            return f-b;
        }
        bool empty() {
            if(f-b == 0) return true;
            else return false;
        }
        void print() {
            for(int i = f; i < b; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.print();
}