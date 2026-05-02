class Solution {
public:
    int valid(int num){
        int temp=num;
        int neww=0;
        int mul=1;
        while(num>0){
            int ld=num%10;
            if (ld==3 || ld==4 || ld==7) return 0;
            else {
                if (ld==1) ld=1;
                else if (ld==0) ld=0;
                else if (ld==8) ld=8;
                else if (ld==2) ld=5;
                else if (ld==5) ld=2;
                else if (ld==6) ld=9;
                else if (ld==9) ld=6;
                neww=neww+(ld*mul);
                mul=mul*10;
            }
            num=num/10;
        }
        if (neww==temp) return 0;
        return 1;
    }
    int rotatedDigits(int n) {
        int cnt=0;
        for (int i=1;i<=n;i++){
            if (valid(i)) cnt++;
        }
        return cnt;
    }
};