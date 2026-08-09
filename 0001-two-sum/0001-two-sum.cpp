class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mpp;
        for (int i=0;i<n;i++){
            int req=target-nums[i];
            if (mpp.find(req)!=mpp.end()){
                 ans.push_back(mpp[req]);
                 ans.push_back(i);
            }
            else{
                mpp[nums[i]]=i;
            }
        }
        return ans;
    }
};