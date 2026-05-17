class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        int xorr=0;
        for (int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for (auto it:mpp){
              if (it.second==2) xorr=xorr^it.first;
        }
        return xorr;
    }
};