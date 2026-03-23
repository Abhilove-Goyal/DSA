#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //if we do target element and check if it exist or not
        unordered_map<int,int>mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int comp = target-nums[i];
            if (mpp.find(comp) != mpp.end()) {
                return {mpp[comp], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
// MORE OPTIMAL        [ Only when we need to return yes or no , For returning index use above method]
// Two Pointer approach 
// first of all SORT the array then-->
// 1. left and right variables
// 2. while (left<=right) 
// check the sum if greater move right backwards if sum is less move left
// return sum;



