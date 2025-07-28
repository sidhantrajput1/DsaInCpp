#include<iostream>
using namespace std;

// int pow(int a, int b) {
//     if (b==0) return 1;
//     return a * pow(a, b - 1);
// }

int pow(int x, int n) {

    if (n==0) return 1;
    
    int ans = pow(x, n / 2);

    if (n % 2 == 0) 
        return ans * ans;
    else
        return ans * ans * x;
    

}

int main() {
    // int a;
    // cout<<"Enter base : ";
    // cin>>a;
    // int b;
    // cout<<"Enter Exponent : ";
    // cin>>b;

    // cout<<a<<" raised to the power "<<b<<" is "<<pow(a, b);
    cout<<pow(3, 6);
}