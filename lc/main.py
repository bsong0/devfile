from typing import *


class Solution:
    def d(self, a, b):
        return (a[1] - b[1])/(a[0]-b[0])

    def minimumLines(self, stockPrices: List[List[int]]) -> int:
        exists = set()
        count = 0
        sorted(stockPrices)
        for i in range(len(stockPrices)):
            de = self.d(stockPrices[i], stockPrices[i-1])
            if not de in exists:
                count += 1
                exists.add(de)
        return count