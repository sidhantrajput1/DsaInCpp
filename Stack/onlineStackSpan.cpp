#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> onlineStockSpan(vector<int> &price)
{
    stack<pair<int, int>> st; // {price, span}
    vector<int> span; 

    for (int i = 0; i < price.size(); i++)
    {
        int currSpan = 1;


        // pop elements while stack top price <= current price
        while (!st.empty() && st.top().first <= price[i])
        {
            currSpan = currSpan + st.top().second;
            st.pop();
        }

        // push current price with its stack
        st.push({price[i], currSpan});
        // store result
        span.push_back(currSpan);
    }

    return span;
}

int main()
{
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    
    vector<int> result = onlineStockSpan(prices);

    for(int num : result) {
        cout<<num<<" ";
    }
    cout<<endl;
}