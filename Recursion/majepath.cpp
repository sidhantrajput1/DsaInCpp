#include<iostream>
using namespace std;

int mazePath(int sr, int sc, int er, int ec) {
    if (sr > er || sc > ec) return 0; // out of grid
    if (sr == er && sc == ec) return 1; // reached destination

    int rightWays = mazePath(sr, sc + 1, er, ec); // move right
    int downWays = mazePath(sr + 1, sc, er, ec); // move down

    return rightWays + downWays;
}

void printPath(int sr, int sc, int er, int ec, string s) {
    if (sr > er || sc > ec) return; // out of grid
    if (sr == er && sc == ec) {
        // reached destination
        cout<<s<<endl;
        return;
    } 
    printPath(sr, sc + 1, er, ec, s+"R"); // move right
    printPath(sr + 1, sc, er, ec, s+"D"); // move down
}

int main() {
    // cout << "Total Path is " << mazePath(0, 0, 2, 2);
    printPath(0, 0, 2, 2, "");
}
