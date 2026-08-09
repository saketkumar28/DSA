class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        int ans=INT_MIN;
        int cnt=0;
        unordered_set<int>st;
        for (int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for (auto it:st){
            if (st.find(it-1)!=st.end()){
                 continue;
            }
            else{
                while(st.find(it+1)!=st.end()){
                    it=it+1;
                    cnt++;
                }
            }
            ans=max(ans,cnt);
            cnt=0;
    }
    return ans+1;
    }
};