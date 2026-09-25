#include <bits/stdc++.h>

class Solution
{
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k)
  {
    std::unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
      mp[nums[i]]++;
    }

    std::vector<std::pair<int, int>> temp;
    for (auto x : mp)
    {
      temp.push_back({x.second, x.first});
    }

    std::sort(temp.begin(), temp.end(), std::greater<>());
    std::vector<int> ans;
    for (int i = 0; i < k; i++)
    {
      ans.push_back(temp[i].second);
    }
    return ans;
  }
};
