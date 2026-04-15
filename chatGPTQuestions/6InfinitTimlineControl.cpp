#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isTimelineStable(vector<int> &timeline, int k){
    stack<int> st;

    for(int i = 0; i < timeline.size(); i++){
        if(st.empty()){
            st.push(timeline[i]);
        }
        else if(timeline[i] < st.top()){
            
            while(!st.empty() && (timeline[i] < st.top())){
                st.pop();
            }
        }
        else {
            st.push(timeline[i]);
        }
    }

    while(!st.empty()){
        cout << st.top() <<" ";
        st.pop();
    }
    return 0;

}

int main() {
    vector<int> timeline = {3, 1, 4, 2, 5};
    int k = 3;

    isTimelineStable(timeline, k);

    return 0;
}