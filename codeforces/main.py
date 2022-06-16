from typing import *
from graphlib import TopologicalSorter

from more_itertools import pairwise

class Solution:
    def alienOrder(self, words: List[str]) -> str:
        d = {}
        cnt = 0
        for i in words:
            for j, k in pairwise(i):
                if d.get(k, False) and not d.get(j, False):
                    d[j] = d[k] - 500
                elif d.get
                