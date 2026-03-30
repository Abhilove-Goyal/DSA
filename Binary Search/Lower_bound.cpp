#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lower_bound(vector<int>& nums, int target) { // ans is equal to target or the smallest element just greater than target 
        int left = 0, right = nums.size()-1;
        int ans = nums.size();
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target){
                ans = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return ans;
    }
};