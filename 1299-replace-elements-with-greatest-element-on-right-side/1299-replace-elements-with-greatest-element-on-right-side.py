class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:
        n=len(arr)
        j=n-1
        maxi=-1
        while j>=0:
            temp=arr[j]
            arr[j]=maxi
            maxi=max(arr[j],temp)
            j=j-1
        return arr
