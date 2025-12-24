class Solution {
  public:
  // pivoting minimum  at beginning
    void bubbleSort(vector<int>& arr) 
    {  
       int n=arr.size();
       for(int i=0;i<=n-2;i++)  // number of passes
       {    bool inversion=0;
           for(int j=n-1;j>i;j--) 
           {
               if(arr[j-1]>arr[j])   
               {
                   swap(arr[j-1],arr[j]);
                   inversion=1;
               }    
           }
           if(inversion==0)
           break;
       }
      
    }
};