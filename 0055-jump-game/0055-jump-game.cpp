class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxind=0;
        for (int i=0;i<n;i++){
          if (i>maxind) return 0;
           maxind=max(maxind,i+nums[i]);
        }
        return 1;
    }
};