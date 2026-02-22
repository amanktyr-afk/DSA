// User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
      long long max1=LLONG_MIN,max2=LLONG_MIN,max3=LLONG_MIN;
      long long min1=LLONG_MAX, min2=LLONG_MAX;
      for(int i=0;i<n;i++)
      {
          if(arr[i]>max1)
          {
              max3=max2;
              max2=max1;
              max1=arr[i];
          }
          else if(arr[i]>max2)
          {
              max3=max2;
              max2=arr[i];
          }
          
          else if(arr[i]>max3)
           {
               max3=arr[i];
           }
           if(arr[i]<min1)
          {
              min2=min1;
              min1=arr[i];
          }
          else if(arr[i]<min2)
          {
              min2=arr[i];
          }
      }
          return max((max1*max2*max3),(min1*min2*max1));
    }
};