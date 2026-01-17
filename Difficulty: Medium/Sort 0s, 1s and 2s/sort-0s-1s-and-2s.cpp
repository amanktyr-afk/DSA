class Solution {
  public:
    void sort012(vector<int>& arr) 
    {
        int n=arr.size();
        int zero=0,two=n-1,i=0;
        while(i<=two)
        {
           if(arr[i]==0)
           {
               swap(arr[i],arr[zero]);
               zero++;
               i++;
           }
           else if(arr[i]==2)
           {
               if(two>0&arr[two]==2)
                two--;
               else if(two>0&&arr[two]==0)
               {
                  swap(arr[two],arr[i]);
                   two--;
               }
               else
               {
                  swap(arr[two],arr[i]);
                   two--;
                   i++;
               }
           }
           else
           i++;
        }
    }
};