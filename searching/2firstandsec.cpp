#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {2, 3, 7, 7, 8, 8, 8, 9};
    int st = 0, en = arr.size() -1;
    int fir = -1, las = -1, target = 8;
    long long mid = 0;

    //first ouccernce
    while(st <= en){
        mid = st + (en - st) /2;
        if(arr[mid] == target){
            fir = mid;
            en = mid -1;
        }
        else if(arr[mid] < target){
            st = mid +1;
        } 
        else {
            en = mid -1;
        }
    }

    //last ouccernce
    st = 0, en = arr.size() -1;
    while(st <= en){
        mid = st + (en - st)/2;
        if(arr[mid] == target){
            las = mid;
            st = mid +1;
        }
        else if(arr[mid] < target){
            st = mid +1;
        }
        else {
            en = mid -1;
        }

        cout << las << endl;
    }


    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    cout <<"the first ouccerence is " << fir <<endl;
    cout <<"the last ouccerence is " << las <<endl;

    return 0;
}