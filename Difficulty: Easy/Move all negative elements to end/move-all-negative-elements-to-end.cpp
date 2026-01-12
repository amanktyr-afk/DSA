class Solution {
  public:
    void segregateElements(vector<int>& arr)
    {  
       int j=0,k=0;
       int n=arr.size();
       vector<int>v(n,0);
       for(int i=0;i<n;i++)
       {
          if(arr[i]<0)
          {   
              v[j]=arr[i];
              j++;
          }
          if(arr[i]>=0)
          {
              swap(arr[i],arr[k]);
              k++;
          }
       }
       j=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]<0)
           {
               arr[i]=v[j];
               j++;
           }
       }
       
    }
};