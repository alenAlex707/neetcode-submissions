#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
      int comp = target - nums[i];
      if (map.count(comp))
      {
        return {map[comp], i};
      }
      else
      {
        map.emplace(nums[i], i);
      }
    }
    return {};
  }
};