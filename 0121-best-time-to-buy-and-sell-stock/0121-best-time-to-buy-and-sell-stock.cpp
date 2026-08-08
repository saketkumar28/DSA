class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxa=INT_MIN;
        int mini=prices[0];
        for (int i=1;i<n;i++){
          mini=min(mini,prices[i]);
          maxa=max(maxa,prices[i]-mini);
        }
        if (maxa==INT_MIN) return 0;
        return maxa;
    }
};