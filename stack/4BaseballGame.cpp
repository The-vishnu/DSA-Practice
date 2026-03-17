#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string>& operations){
    stack<int> st;
    for(auto it: operations){
        if(it == "C") st.pop();
        else if(it == "D") st.push(st.top()*2);
        else if(it == "+"){
            int top1 = st.top(); st.pop();
            int top2 = st.top();

            st.push(top1);
            st.push(top1 + top2);
            

        }
        else{
            st.push(stoi(it)); 
        }
    }

    int ans = 0;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    vector<string> operations = {"5","2","C","D","+"};

    cout << calPoints(operations);
    return 0;
}