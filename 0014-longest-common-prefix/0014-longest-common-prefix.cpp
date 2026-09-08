class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if (n==1) return strs[0];
        string ans="";
        sort(strs.begin(),strs.end());
        int i=0;
        int j=0;
        if (strs[0].size()==0 || strs[n-1].size()==0) return ans;
        while(strs[0][i]==strs[n-1][j] && i<strs[0].size()){
            ans=ans+strs[0][i];
            i++;
            j++;
        }
        return ans;
    }
};