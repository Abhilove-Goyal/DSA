#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& st) {
        sort(st.begin(),st.end());
        int n=st.size()-1;
        string ans="";
        for(int i=0;i<st[0].length();i++){
            if(st[0][i]!=st[n][i])return ans;
            ans+=st[0][i];
        }
        return ans;
    }
};