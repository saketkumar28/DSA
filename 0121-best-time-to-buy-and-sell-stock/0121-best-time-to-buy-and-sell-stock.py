class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mini=prices[0]
        maxp=0
        for num in prices:
            mini=min(mini,num)
            maxp=max(maxp,num-mini)
        return maxp