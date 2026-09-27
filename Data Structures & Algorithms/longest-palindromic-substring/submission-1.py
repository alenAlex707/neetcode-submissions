class Solution:
    def longestPalindrome(self, s: str) -> str:
        def expand(l, r, s):
            n = len(s)
            ret = (0, 0)
            W = 0
            while l >= 0 and r < n and s[l] == s[r]:
                ret = (l, r)
                W = r - l + 1
                l, r = l - 1, r + 1
            return ret, W

        n = len(s)
        if n == 0:
            return ""

        longest_length = 0
        longest_indices = (0, 0)

        for i in range(n):
            # odd
            best, W = expand(i, i, s)
            if W > longest_length:
                longest_length, longest_indices = W, best

            # even
            best, W = expand(i, i + 1, s)
            if W > longest_length:
                longest_length, longest_indices = W, best

        return s[longest_indices[0] : longest_indices[1] + 1]
