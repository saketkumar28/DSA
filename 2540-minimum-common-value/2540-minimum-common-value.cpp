class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        int ans=INT_MAX;
        while(i<n && j<m){
            if (nums1[i]==nums2[j]) {
                ans=nums1[i];
                break;
            }
            else if (nums2[j]>nums1[i]){
                i++;
            }
            else if (nums1[i]>nums2[j]){
                j++;
            }
        }
        if (ans==INT_MAX) return -1;
        return ans;
    }
};