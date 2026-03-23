#include <bits/stdc++.h>
using namespace std;

// int xorr = 0;
// for(int i=0;i<nums.size();i++){
//     xorr = xorr ^ nums[i];
// }
// return xorr;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        for (auto it : freq) {
            if (it.second == 1) {
                return it.first;
            }
        }
        return -1; 
    }
};