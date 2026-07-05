class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            columnNumber--;
            int ld=columnNumber%26;
            ans=ans+(char)((ld)+'A');
            columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};