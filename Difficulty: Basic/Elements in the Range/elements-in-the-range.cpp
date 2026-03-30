class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) 
    {
      for(int i=A;i<=B;i++)
      { 
          bool flag=0;
          for(int j=0;j<n;j++)
          {
             if(arr[j]==i)
             flag=1;
          }
          if(flag==0)
          return 0;
      }
      return 1;
    }
};
