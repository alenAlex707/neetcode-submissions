class Solution
{
public:
  string encode(vector<string> &strs)
  {
    string s;
    for (int i = 0; i < strs.size(); i++)
    {
      s += to_string(strs[i].length()) + "#" + strs[i];
    }
    return s;
  }

  vector<string> decode(string s)
  {
    int i{};
    std::vector<string> ans;

    while (i < s.length())
    {
      string lenstr = "";
      while (s[i] != '#')
      {
        lenstr += s[i++];
      }
      int len = stoi(lenstr);
      i++;

      string str = "";
      for (int j = 0; j < len; j++)
      {
        str += s[i++];
      }
      ans.push_back(str);
    }
    return ans;
  }
};