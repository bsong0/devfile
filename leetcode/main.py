from typing import List


class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        res = 0
        res += min(income, brackets[0][0]) * brackets[0][1] / 100
        def tozero(x):
            if x < 0:
                return 0
            return x
        for ii, i in enumerate(brackets):

            if ii == 0:
                continue
            res += tozero(min(i[0], income) - brackets[ii-1][0]) * i[1] / 100            
            if income < i[0]:
                break
            
        
        return res
