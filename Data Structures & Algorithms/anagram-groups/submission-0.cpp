#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string getKey(string str) {
        sort(str.begin(), str.end());
        return str;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string key = getKey(strs[i]);
            mp[key].push_back(strs[i]);
        }

        vector<vector<string>> final;
        for (auto& [k, v] : mp) {
            final.push_back(v);
        }
        return final;
    }
};