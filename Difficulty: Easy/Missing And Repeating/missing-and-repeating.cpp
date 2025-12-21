class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr)
    {  
        vector<int> v={0,0};
        int n =arr.size();
        //ele 1 to n coverted into index 0 to n-1 for simplicity
        for(int i=0;i<n;i++)
        arr[i]=arr[i]-1;
       // stroing frequency of ele and ele at single cell
       //arr[i]%n  to find real ele at thet cell
       for(int i=0;i<n;i++)
       {   
          arr[arr[i]%n]+=n; // storing frequency of ele=arr[i] at index=arr[i] by adding n 
       }
       //
       for(int i=0;i<n;i++)
       {
          if(arr[i]/n==2)
           v[0]=i+1;
           if(arr[i]/n==0)
           v[1]=i+1;
       }
       return v;
     }
        
};