class Solution {
    public int[] replaceElements(int[] arr) {
        int n=arr.length;
        int j=n-1;
        int maxi=-1;
        while(j>=0){
            int temp=arr[j];
            arr[j]=maxi;
            maxi=Math.max(maxi,temp);
            j--;
        }
        return arr;
    }
}