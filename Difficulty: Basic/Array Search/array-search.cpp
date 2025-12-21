class Solution {
  public:
   // recursive linear search
    int linear_search(vector<int>& arr,int x,int n,int index)
    {
        if(index==n)  // base case
        return -1;
        if(arr[index]==x)
        return index;

        return linear_search(arr,x,n,index+1);
    }
    int search(vector<int>& arr, int x)
    {
        int n=arr.size();
         int index=0;
       return  linear_search(arr,x,n,index);
        
    }
};