class Solution {
public:
    void merge(vector<int>&a,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high){
            if (a[left]<a[right]){
                temp.push_back(a[left]);
                left++;
            }
            else{
                temp.push_back(a[right]);
                right++;
            }
        }

        while(left<=mid){
         temp.push_back(a[left]);
         left++;
        }
        while(right<=high){
         temp.push_back(a[right]);
         right++;
        }
        for (int x=low;x<=high;x++){
            a[x]=temp[x-low];
        }
    }
    int countpairs(vector<int>&a,int low,int mid,int high){
        int cnt=0;
        int right=mid+1;
        for (int i=low;i<=mid;i++){
             while(right<=high && a[i]>2*1ll*a[right]){
                right++;
             }
             cnt=cnt+(right-mid-1);
             
        }
        return cnt;
    }
    int ms(vector<int>&a,int l ,int h){
        int cnt=0;
        if (l>=h) return cnt;
        int m=(l+h)/2;
        cnt=cnt+ms(a,l,m);
        cnt=cnt+ms(a,m+1,h);
        cnt=cnt+countpairs(a,l,m,h);
        merge(a,l,m,h);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        int ans=ms(nums,0,n-1);
        return ans;
    }
};