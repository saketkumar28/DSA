class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if (n!=m) return 0;
        int a[26]={0};
        int b[26]={0};
        for (int i=0;i<n;i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for (int i=0;i<26;i++){
            if (a[i]!=b[i]) return 0;
        }
        return 1;
    }
};