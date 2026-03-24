#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 0;
        int maxi = 0;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                int pro = prices[r]-prices[l];
                maxi = max(maxi, pro);
            }
            else l = r;
            r += 1;
        }
        return maxi;
    }
};