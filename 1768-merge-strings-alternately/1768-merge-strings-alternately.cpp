class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string ans;
        int i=0;
        int j=0;
        int cnt=0;
        while(i<n && j<m){
            if (cnt%2==0){
                ans.push_back(word1[i]);
                i++;
                cnt++;
            }
            else{
                ans.push_back(word2[j]);
                j++;
                cnt++;
            }
        }
        while(i<n){
            ans.push_back(word1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(word2[j]);
            j++;
        }
        return ans;
    }
};