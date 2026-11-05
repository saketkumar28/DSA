class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int ans=INT_MIN;
        int cnt=0;
        while(j<n){
            if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') cnt++;
            while(j-i+1>k){
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    cnt--;
                    i++;
                }
                else{
                    i++;
                }
            }
            if (j-i+1==k) ans=max(ans,cnt);
            j++;
        }
        return ans;
    }
};