class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int maxp=Integer.MIN_VALUE;
        int mini=prices[0];
        for (int i=0;i<n;i++){
            mini=Math.min(prices[i],mini);
            maxp=Math.max(maxp,prices[i]-mini);
        }
        return maxp;
    }
}