#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string temp;
        vector<string>words;
        for(char c : s){
            if(c!=' '){
                temp += c;
            }
            else if(!temp.empty()){
                words.push_back(temp);
                temp.clear();
            }
        }
        if(!temp.empty()) words.push_back(temp);
        reverse(words.begin(),words.end());
        string ans ;
        for(int i=0;i<words.size();i++){
            ans += words[i];
            if(i!=words.size()-1) ans += " "; //add space after every word except last
        }
        return ans;
    }
};