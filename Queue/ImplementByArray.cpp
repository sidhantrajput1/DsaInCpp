#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Queue {
    public: 
        // f -> front , b -> back
        int f;
        int b;
        int s; // s -> size
        // int arr[7];
        vector<int> arr;
        Queue(int val){
            f = 0;
            b = 0;
            s = 0;
            vector<int> v(val);
            arr = v;
        }
        void push(int val) {  
            if(b==arr.size()) {
                cout<<"Queue is full"<<endl;
                return;
            }
            arr[b] = val;
            b++; 
            s++;
        }
        void pop() {
            if(s==0) {
                cout<<"Queue is empty";
                return;
            } 
            f++;
            s--;
        }
        int front() {
            if(s==0) {
                cout<<"Queue is empty";
                return -1;
            } 
            return arr[f];
        }
        int back() {
            if(s==0) {
                cout<<"Queue is empty";
                return -1;
            } 
            return arr[b-1];
        }
        int size() {
            return s;
        }
        bool empty() {
            if(s == 0) return true;
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
    Queue q(7);
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30 
    q.push(40); // 10 20 30 40 
    q.push(50); // 10 20 30 40 50
    q.print();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(70); // 10 20 30 40 50 70
    q.print();
    cout<<q.back()<<endl;
}