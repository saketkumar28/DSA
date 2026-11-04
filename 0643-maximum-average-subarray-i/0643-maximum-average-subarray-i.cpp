class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if (n==1) return (double)(nums[0]);
        double ans=INT_MIN;
        int i=0;
        int j=0;
        int sum=0;
        while(j<n){
            sum=sum+nums[j];
            while((j-i+1)>k){
                 sum=sum-nums[i];
                 i++;
            }
            if ((j-i+1)==k){
                  ans=max(ans,(sum/(double)(j-i+1)));
        }
        j++;
        }
        return ans;
    }
};