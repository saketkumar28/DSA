class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        map<char,int>mpp;
        int i=0;
        int j=0;
        int ans=INT_MIN;
        while(j<n){
            mpp[s[j]]++;
            while(j-i+1>mpp.size()){
                 mpp[s[i]]--;
                 if (mpp[s[i]]==0) mpp.erase(s[i]);
                 i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        if (ans==INT_MIN) return 0;
        return ans;
    }
};