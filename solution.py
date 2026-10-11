class Solution:
    def minimumCost(self, cost: list[int]) -> int:
        ret = 0
        j = 0
        for n in sorted(cost, reverse = True):
            if j < 2:
                ret += n
                j += 1
            else:
                j = 0
        
        return ret
