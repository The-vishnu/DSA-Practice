#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isTrionic(vector<int>& nums){
        int flag = 0;
        int restP = 2;
        int mountain = 0;
        int i = 0, j = 1;

    if(nums.size() <= 3) return false;
    if(nums[nums.size() - 1] < nums[nums.size() - 2]) return false;
    if(nums[0] > nums[1]) return false;
    while (j <= nums.size() - 1) {
        if (nums[i] < nums[j]) {
            if (restP == 1) {
                restP--;
            }
                flag = j;
                i++;
                j++;
            } else if (nums[i] > nums[j]) {
                if (restP == 2 && flag != 0) {
                    mountain++;
                    restP--;
                }

                i++;
                j++;
            }
            else if(nums[i] == nums[j]){
                return false;
            }
    }

    if(restP == 0){
        return true;
    }
    return false;
}

int main() {
    vector<int> nums = {3,4,3,7,4,7};

    if(isTrionic(nums)){
        cout << "Trionic Array" << endl;
    }
    else{
        cout << "Not a Trionic Array" << endl;
    }

    return 0;
}