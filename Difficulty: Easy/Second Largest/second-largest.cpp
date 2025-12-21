class Solution {
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        int n=arr.size(), m=arr[0],sm=0,index=0;
        for(int i=0;i<n;i++)
        {
            if(m<arr[i])
            {
                m=arr[i];
                index=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(sm<arr[i]&&arr[i]!=m)
            sm=arr[i];
        }
        return sm;
        
        
    }
};