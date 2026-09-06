class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if (n!=m) return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        while(i<n){
            if (s[i]!=t[i]) return 0;
            i++;
        }
        return 1;
    }
};