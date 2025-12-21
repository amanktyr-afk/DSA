
class Solution {
  public:
     int linear_search(vector<int>&arr,int k,int n,int index)
    {
        if(index==n)  // base case
        return -1;
        if(arr[index]==k)
        return index+1;

        return linear_search(arr,k,n,index+1);
    }
    int search(int k, vector<int>& arr)
    {   
        int n=arr.size();
         int index=0;
       return  linear_search(arr,k,n,index);
        
    }
};
