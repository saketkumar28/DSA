class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mpp;
        map<int,int>mpp1;
        for (int i=0;i<n;i++){
             mpp[arr[i]]++;
        }
        for (auto it:mpp){
            mpp1[it.second]++;
        }
        for (auto it:mpp1){
            if  (it.second>1) return 0;
        }
        return 1;
    }
};