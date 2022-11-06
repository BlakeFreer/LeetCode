# Author: Blake Freer
# Date Created: November 6, 2022
# Very inefficient, brute force solution

from math import ceil, log2
class Solution:
    def concatenatedBinary(self, n: int) -> int:
        x = 0
        for i in range(1, n+1):
            x = x*2**ceil(log2(i+1))+i
            x = x % (10**9+7)
        return x