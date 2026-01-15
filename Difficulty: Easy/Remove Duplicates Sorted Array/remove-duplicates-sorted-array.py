class Solution:
    def removeDuplicates(self, arr):
        j = 0
        uni = arr[0]
        for i in arr:
            if i != uni:
                arr[j] = uni
                j +=1
                uni = i
        arr[j] = i
        return arr[0:j+1:1]
                
            