class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int ans=INT_MIN;
        int i=0;
        while(i<n){
           if (nums[i]==1){
            cnt++;
           }
           else{
            ans=max(ans,cnt);
            cnt=0;
           }
           i++;
        }
        ans=max(ans,cnt);
        return ans;
    }
};