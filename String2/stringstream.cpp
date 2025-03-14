#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;


int main () {
    string str = "i am full stack   developer";
    stringstream ss(str);
    string  temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}