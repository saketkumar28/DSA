class Solution {
public:
    int rev(int n){
        int t=n;
        int rev=0;
        while(t>0){
          int ld=t%10;
          rev=rev*10+ld;
          t=t/10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        int p=rev(n);
        return abs(n-p);
    }
};