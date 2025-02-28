// Array -> data structure which store a collection pf homogenous items
// collection memory
// contigious memory
// index -> location of evry element
// based on 0-indexing

#include<bits/stdc++.h>
using namespace std;

// datatype arrayname[arraySize] = int array[];
// int array[] = {1, 2, 3, 4, 5, 6};

void print(vector<int>& v) {
    for(int i = 0; i < v.size() ; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6};
    print(v); 
    // ! Accessing the element
    // v[0] = 9;
    // cout<<v[0]<<endl; 

    //  inserting element and push back element in vector;

    v.push_back(11);
    v.push_back(12);
    v.insert(v.begin() + 1, 18);

    // ! deleting the element
    // v.erase(find(v.begin(), v.end(), 6));

    //  
    print(v);
    reverse(v.begin(), v.end());
    print(v);
}