class Solution:
    def countSubstrings(self, s: str) -> int:
      def expand(l, r, s):
          n = len(s)
          count = 0
          while l >= 0 and r < n and s[l] == s[r]:
              count += 1
              l, r = l - 1, r + 1
          return count

      total = 0
      for i in range(len(s)):
          total += expand(i, i, s)
          total += expand(i, i + 1, s)
      return total