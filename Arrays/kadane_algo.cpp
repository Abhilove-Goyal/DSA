#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int num : nums){
            sum = max(sum + num, sum);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};