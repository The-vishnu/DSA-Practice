#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> finalDiscountPrices(vector<int>& prices){
    stack<int> nextSM;

    for(int i = 0; i < prices.size(); i++){

        while(!nextSM.empty() && prices[nextSM.top()] >= prices[i]){
            prices[nextSM.top()] -= prices[i];
            nextSM.pop();
        }
        nextSM.push(i);
    }

    return prices;
}

int main() {
    vector<int> prices = {8,4,6,2,3};

    vector<int> result = finalDiscountPrices(prices);

    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}