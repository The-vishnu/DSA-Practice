#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string& s){

    string ans = "";

    for(char str : s){
        if(!ans.empty() && ans.back() == str){
            ans.pop_back();
        }
        else ans.push_back(str);
    }

    return ans;




    // stack<char> st;

    // for(char it : s){

    //     if(!st.empty() && st.top() == it){
    //         st.pop();
    //     }
    //     else st.push(it);
    // }

    // string result = "";

    // while(!st.empty()){
    //     result = st.top()+result;
    //     st.pop();
    // }
    // return result;
}

int main() {
    string s = "abbaca";;

    cout <<"Output: " << removeDuplicates(s);
    return 0;
}