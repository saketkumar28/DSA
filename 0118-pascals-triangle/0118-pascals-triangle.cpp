class Solution {
public:
    int combo(int n,int r){
        if (r==0) return 1;
        if (n==r) return 1;
        long long int num=1;
        for (int i=1;i<=r;i++){
            num=(num*(n)/i);
            n=n-1;
        }
        return num;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp;
        for (int i=0;i<numRows;i++){
            for (int j=0;j<=i;j++){
                int t=combo(i,j);
                temp.push_back(t);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};