// returning the same array not a new one., Use set ->nlogn use 2 ppointer-> n
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;  
            }
        }
        return i+1;
    }
};