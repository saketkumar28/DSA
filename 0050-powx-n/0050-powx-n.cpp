class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long int num=n;
        if (n<0){
            num=-1*1ll*(n);
        }
        while(num>0)
        if (num%2==0){
            num=num/2;
            x=x*x;
        }
        else{
          num=num-1;
          ans=ans*x;
        }
        if (n<0) return (double)1/ans;
        return ans;
    }
};