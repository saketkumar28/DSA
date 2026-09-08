class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        int flag=0;
        long long int num=0;
        while(s[i]==' ') i++;
        if (s[i]=='-'){
            flag=1;
            i++;
        }
        else if (s[i]=='+'){
            flag=0;
            i++;
        }
        while(i<n && s[i]=='0') i++;
        while(s[i]>='0' && s[i]<='9') {
            num=num*10+(s[i]-'0');
            if (num>=INT_MAX && flag==0) return INT_MAX;
            if (flag==1 && num*(-1)<=INT_MIN) return INT_MIN;
            i++;
        }
        if (flag==1) num=num*(-1);
        return (int)num;

    }
};